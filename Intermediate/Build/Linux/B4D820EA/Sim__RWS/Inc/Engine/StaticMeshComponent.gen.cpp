// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FStaticMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshComponentLODInfo(FStaticMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshComponentLODInfo")),new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo;
	struct Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintedVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaintedVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintedVertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Vertex data cached at the time this LOD was painted, if any" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices = { UE4CodeGen_Private::EPropertyClass::Array, "PaintedVertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshComponentLODInfo, PaintedVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaintedVertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPaintedVertex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewProp_PaintedVertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshComponentLODInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticMeshComponentLODInfo),
		alignof(FStaticMeshComponentLODInfo),
		Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC() { return 1689479388U; }
class UScriptStruct* FPaintedVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintedVertex, Z_Construct_UPackage__Script_Engine(), TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaintedVertex(FPaintedVertex::StaticStruct, TEXT("/Script/Engine"), TEXT("PaintedVertex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex
{
	FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaintedVertex")),new UScriptStruct::TCppStructOps<FPaintedVertex>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPaintedVertex;
	struct Z_Construct_UScriptStruct_FPaintedVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Cached vertex information at the time the mesh was painted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintedVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Normal), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPaintedVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PaintedVertex",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPaintedVertex),
		alignof(FPaintedVertex),
		Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaintedVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_CRC() { return 522398626U; }
	void UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent()
	{
		UClass* Class = UStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalBounds", &UStaticMeshComponent::execGetLocalBounds },
			{ "OnRep_StaticMesh", &UStaticMeshComponent::execOnRep_StaticMesh },
			{ "SetDistanceFieldSelfShadowBias", &UStaticMeshComponent::execSetDistanceFieldSelfShadowBias },
			{ "SetForcedLodModel", &UStaticMeshComponent::execSetForcedLodModel },
			{ "SetReverseCulling", &UStaticMeshComponent::execSetReverseCulling },
			{ "SetStaticMesh", &UStaticMeshComponent::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics
	{
		struct StaticMeshComponent_eventGetLocalBounds_Parms
		{
			FVector Min;
			FVector Max;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Struct, "Max", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Struct, "Min", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Get Local bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "GetLocalBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(StaticMeshComponent_eventGetLocalBounds_Parms), Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics
	{
		struct StaticMeshComponent_eventOnRep_StaticMesh_Parms
		{
			UStaticMesh* OldStaticMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "OldStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventOnRep_StaticMesh_Parms, OldStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "OnRep_StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(StaticMeshComponent_eventOnRep_StaticMesh_Parms), Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics
	{
		struct StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetDistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics
	{
		struct StaticMeshComponent_eventSetForcedLodModel_Parms
		{
			int32 NewForcedLodModel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewForcedLodModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "NewForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetForcedLodModel_Parms, NewForcedLodModel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshComponent_eventSetForcedLodModel_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics
	{
		struct StaticMeshComponent_eventSetReverseCulling_Parms
		{
			bool ReverseCulling;
		};
		static void NewProp_ReverseCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReverseCulling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit(void* Obj)
	{
		((StaticMeshComponent_eventSetReverseCulling_Parms*)Obj)->ReverseCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "ReverseCulling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StaticMeshComponent_eventSetReverseCulling_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Set forced reverse culling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetReverseCulling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshComponent_eventSetReverseCulling_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics
	{
		struct StaticMeshComponent_eventSetStaticMesh_Parms
		{
			UStaticMesh* NewMesh;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshComponent_eventSetStaticMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NewMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshComponent_eventSetStaticMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Change the StaticMesh used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, "SetStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister()
	{
		return UStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDerivedDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshDerivedDataKey;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[];
#endif
		static void NewProp_bReverseCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[];
#endif
		static void NewProp_bDisplayVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomOverrideVertexColorPerLOD_MetaData[];
#endif
		static void NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomOverrideVertexColorPerLOD;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[];
#endif
		static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubDivisions_MetaData[];
#endif
		static void NewProp_bUseSubDivisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubDivisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[];
#endif
		static void NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[];
#endif
		static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstanceForTextureStreaming_MetaData[];
#endif
		static void NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstanceForTextureStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisallowMeshPaintPerInstance_MetaData[];
#endif
		static void NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisallowMeshPaintPerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[];
#endif
		static void NewProp_bForceNavigationObstacle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[];
#endif
		static void NewProp_bOverrideNavigationExport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLOD_MetaData[];
#endif
		static void NewProp_bOverrideMinLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[];
#endif
		static void NewProp_bOverrideWireframeColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticMeshImportVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndexPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIndexPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndexPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorSection;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColorOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubDivisionStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubDivisionStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLODLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousLODLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	UObject* (*const Z_Construct_UClass_UStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds, "GetLocalBounds" }, // 1951526830
		{ &Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 2610635359
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias, "SetDistanceFieldSelfShadowBias" }, // 2700635942
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel, "SetForcedLodModel" }, // 3813459217
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling, "SetReverseCulling" }, // 465928248
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh, "SetStaticMesh" }, // 1766114136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/StaticMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "StaticMeshComponent is used to create an instance of a UStaticMesh.\nA static mesh is a piece of geometry that consists of a static set of polygons.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Material Bounds used for texture streaming." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialStreamingRelativeBoxes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MaterialStreamingRelativeBoxes), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner = { UE4CodeGen_Private::EPropertyClass::UInt32, "MaterialStreamingRelativeBoxes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Derived data key of the static mesh, used to determine if an update from the source static mesh is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey = { UE4CodeGen_Private::EPropertyClass::Str, "StaticMeshDerivedDataKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshDerivedDataKey), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The list of texture, bounds and scales. As computed in the texture streaming build process." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingTextureData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000400000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StreamingTextureData), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StreamingTextureData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData = { UE4CodeGen_Private::EPropertyClass::Array, "LODData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, LODData), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights = { UE4CodeGen_Private::EPropertyClass::Array, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, IrrelevantLights_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IrrelevantLights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired resolution of streaming textures that uses UV 0.  1.0 is the default, whereas a higher value increases the streamed-in resolution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Distance Field Indirect Shadow Min Visibility" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls how dark the dynamic indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldIndirectShadowMinVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMax", "4096" },
		{ "editcondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes = { UE4CodeGen_Private::EPropertyClass::Int, "OverriddenLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, OverriddenLightMapRes), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls whether the static mesh component's backface culling should be reversed" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bReverseCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverseCulling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bDisplayVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The component has some custom painting on LODs or not." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bCustomOverrideVertexColorPerLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomOverrideVertexColorPerLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Use the collision profile specified in the StaticMesh asset." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bUseDefaultCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDefaultCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use subdivisions or just the triangle's vertices." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bUseSubDivisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSubDivisions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideDistanceFieldSelfShadowBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideDistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Distance Field Indirect Shadow" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\nThis works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\nThe StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bCastDistanceFieldIndirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDistanceFieldIndirectShadow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideLightMapRes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Ignore this instance of this static mesh when calculating streaming information.\nThis can be useful when doing things like applying character textures to static geometry,\nto avoid them using distance-based streaming." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bIgnoreInstanceForTextureStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreInstanceForTextureStreaming", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bDisallowMeshPaintPerInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisallowMeshPaintPerInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows overriding navigation export behavior per component: full collisions or dynamic obstacle" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bForceNavigationObstacle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceNavigationObstacle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideNavigationExport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideNavigationExport", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideMinLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMinLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideWireframeColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideWireframeColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "* The import version of the static mesh when it was assign this is update when:\n* - The user assign a new staticmesh to the component\n* - The component is serialize (IsSaving)\n* - Default value is BeforeImportStaticMeshVersionWasAdded\n*\n* If when the component get load (PostLoad) the version of the attach staticmesh is newer\n* then this value, we will remap the material override because the order of the materials list\n* in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion = { UE4CodeGen_Private::EPropertyClass::Int, "StaticMeshImportVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MaterialIndexPreview), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndexPreview", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SectionIndexPreview), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The material currently selected in the Editor. Used for highlighting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorMaterial), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The section currently selected in the Editor. Used for highlighting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorSection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorSection), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "editcondition", "bOverrideWireframeColor" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Wireframe color to use if bOverrideWireframeColor is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WireframeColorOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, WireframeColorOverride), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000035, 1, "OnRep_StaticMesh", STRUCT_OFFSET(UStaticMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Subdivision step size for static vertex lighting." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize = { UE4CodeGen_Private::EPropertyClass::Int, "SubDivisionStepSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, SubDivisionStepSize), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "editcondition", "bOverrideMinLOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nThis is ignored if ForcedLodModel is enabled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "MinLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, MinLOD), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "LOD that was desired for rendering this StaticMeshComponent last frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel = { UE4CodeGen_Private::EPropertyClass::Int, "PreviousLODLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, PreviousLODLevel), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel = { UE4CodeGen_Private::EPropertyClass::Int, "ForcedLodModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UStaticMeshComponent, ForcedLodModel), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams = {
		&UStaticMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshComponent, 3172771426);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshComponent(Z_Construct_UClass_UStaticMeshComponent, &UStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
