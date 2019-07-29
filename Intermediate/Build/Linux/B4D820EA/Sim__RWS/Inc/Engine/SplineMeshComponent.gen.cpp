// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SplineMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartRoll();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartTangent();
	ENGINE_API UFunction* Z_Construct_UFunction_USplineMeshComponent_UpdateMesh();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	static UEnum* ESplineMeshAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplineMeshAxis, Z_Construct_UPackage__Script_Engine(), TEXT("ESplineMeshAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineMeshAxis(ESplineMeshAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("ESplineMeshAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESplineMeshAxis_CRC() { return 1309440971U; }
	UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineMeshAxis"), 0, Get_Z_Construct_UEnum_Engine_ESplineMeshAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineMeshAxis::X", (int64)ESplineMeshAxis::X },
				{ "ESplineMeshAxis::Y", (int64)ESplineMeshAxis::Y },
				{ "ESplineMeshAxis::Z", (int64)ESplineMeshAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESplineMeshAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESplineMeshAxis::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSplineMeshParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshParams, Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshParams"), sizeof(FSplineMeshParams), Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineMeshParams(FSplineMeshParams::StaticStruct, TEXT("/Script/Engine"), TEXT("SplineMeshParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams
{
	FScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineMeshParams")),new UScriptStruct::TCppStructOps<FSplineMeshParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSplineMeshParams;
	struct Z_Construct_UScriptStruct_FSplineMeshParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Structure that holds info about spline, passed to renderer to deform UStaticMesh.\nAlso used by Lightmass, so be sure to update Lightmass::FSplineMeshParams and the static lighting code if this changes!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Ending offset of the mesh from the spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Roll around spline applied at end." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll = { UE4CodeGen_Private::EPropertyClass::Float, "EndRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "X and Y scale applied to mesh at end of spline." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale = { UE4CodeGen_Private::EPropertyClass::Struct, "EndScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "End tangent of spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "End location of spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Starting offset of the mesh from the spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Roll around spline applied at start" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll = { UE4CodeGen_Private::EPropertyClass::Float, "StartRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "X and Y scale applied to mesh at start of spline." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale = { UE4CodeGen_Private::EPropertyClass::Struct, "StartScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Start tangent of spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Start location of spline, in component space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplineMeshParams",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSplineMeshParams),
		alignof(FSplineMeshParams),
		Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineMeshParams"), sizeof(FSplineMeshParams), Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineMeshParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC() { return 2867014261U; }
	void USplineMeshComponent::StaticRegisterNativesUSplineMeshComponent()
	{
		UClass* Class = USplineMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryMax", &USplineMeshComponent::execGetBoundaryMax },
			{ "GetBoundaryMin", &USplineMeshComponent::execGetBoundaryMin },
			{ "GetEndOffset", &USplineMeshComponent::execGetEndOffset },
			{ "GetEndPosition", &USplineMeshComponent::execGetEndPosition },
			{ "GetEndRoll", &USplineMeshComponent::execGetEndRoll },
			{ "GetEndScale", &USplineMeshComponent::execGetEndScale },
			{ "GetEndTangent", &USplineMeshComponent::execGetEndTangent },
			{ "GetForwardAxis", &USplineMeshComponent::execGetForwardAxis },
			{ "GetSplineUpDir", &USplineMeshComponent::execGetSplineUpDir },
			{ "GetStartOffset", &USplineMeshComponent::execGetStartOffset },
			{ "GetStartPosition", &USplineMeshComponent::execGetStartPosition },
			{ "GetStartRoll", &USplineMeshComponent::execGetStartRoll },
			{ "GetStartScale", &USplineMeshComponent::execGetStartScale },
			{ "GetStartTangent", &USplineMeshComponent::execGetStartTangent },
			{ "SetBoundaryMax", &USplineMeshComponent::execSetBoundaryMax },
			{ "SetBoundaryMin", &USplineMeshComponent::execSetBoundaryMin },
			{ "SetEndOffset", &USplineMeshComponent::execSetEndOffset },
			{ "SetEndPosition", &USplineMeshComponent::execSetEndPosition },
			{ "SetEndRoll", &USplineMeshComponent::execSetEndRoll },
			{ "SetEndScale", &USplineMeshComponent::execSetEndScale },
			{ "SetEndTangent", &USplineMeshComponent::execSetEndTangent },
			{ "SetForwardAxis", &USplineMeshComponent::execSetForwardAxis },
			{ "SetSplineUpDir", &USplineMeshComponent::execSetSplineUpDir },
			{ "SetStartAndEnd", &USplineMeshComponent::execSetStartAndEnd },
			{ "SetStartOffset", &USplineMeshComponent::execSetStartOffset },
			{ "SetStartPosition", &USplineMeshComponent::execSetStartPosition },
			{ "SetStartRoll", &USplineMeshComponent::execSetStartRoll },
			{ "SetStartScale", &USplineMeshComponent::execSetStartScale },
			{ "SetStartTangent", &USplineMeshComponent::execSetStartTangent },
			{ "UpdateMesh", &USplineMeshComponent::execUpdateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics
	{
		struct SplineMeshComponent_eventGetBoundaryMax_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the boundary max" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetBoundaryMax_Parms), Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics
	{
		struct SplineMeshComponent_eventGetBoundaryMin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the boundary min" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetBoundaryMin_Parms), Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics
	{
		struct SplineMeshComponent_eventGetEndOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics
	{
		struct SplineMeshComponent_eventGetEndPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end position of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics
	{
		struct SplineMeshComponent_eventGetEndRoll_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end roll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetEndRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics
	{
		struct SplineMeshComponent_eventGetEndScale_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end scaling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndScale_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics
	{
		struct SplineMeshComponent_eventGetEndTangent_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end tangent vector of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetEndTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetEndTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics
	{
		struct SplineMeshComponent_eventGetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetForwardAxis_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the forward axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetForwardAxis_Parms), Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics
	{
		struct SplineMeshComponent_eventGetSplineUpDir_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetSplineUpDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the spline up direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetSplineUpDir_Parms), Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics
	{
		struct SplineMeshComponent_eventGetStartOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics
	{
		struct SplineMeshComponent_eventGetStartPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start position of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics
	{
		struct SplineMeshComponent_eventGetStartRoll_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start roll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SplineMeshComponent_eventGetStartRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics
	{
		struct SplineMeshComponent_eventGetStartScale_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start scaling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartScale_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics
	{
		struct SplineMeshComponent_eventGetStartTangent_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start tangent vector of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "GetStartTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SplineMeshComponent_eventGetStartTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics
	{
		struct SplineMeshComponent_eventSetBoundaryMax_Parms
		{
			float InBoundaryMax;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetBoundaryMax_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetBoundaryMax_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_InBoundaryMax = { UE4CodeGen_Private::EPropertyClass::Float, "InBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMax_Parms, InBoundaryMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_InBoundaryMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the boundary max" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetBoundaryMax_Parms), Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics
	{
		struct SplineMeshComponent_eventSetBoundaryMin_Parms
		{
			float InBoundaryMin;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetBoundaryMin_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetBoundaryMin_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_InBoundaryMin = { UE4CodeGen_Private::EPropertyClass::Float, "InBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMin_Parms, InBoundaryMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_InBoundaryMin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the boundary min" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetBoundaryMin_Parms), Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics
	{
		struct SplineMeshComponent_eventSetEndOffset_Parms
		{
			FVector2D EndOffset;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndOffset_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndOffset_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_EndOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "EndOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndOffset_Parms, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_EndOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics
	{
		struct SplineMeshComponent_eventSetEndPosition_Parms
		{
			FVector EndPos;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndPosition_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndPosition_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndPosition_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_EndPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end position of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics
	{
		struct SplineMeshComponent_eventSetEndRoll_Parms
		{
			float EndRoll;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndRoll_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndRoll_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_EndRoll = { UE4CodeGen_Private::EPropertyClass::Float, "EndRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndRoll_Parms, EndRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_EndRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end roll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetEndRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics
	{
		struct SplineMeshComponent_eventSetEndScale_Parms
		{
			FVector2D EndScale;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndScale_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndScale_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_EndScale = { UE4CodeGen_Private::EPropertyClass::Struct, "EndScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndScale_Parms, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_EndScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "CPP_Default_EndScale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end scaling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndScale_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics
	{
		struct SplineMeshComponent_eventSetEndTangent_Parms
		{
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndTangent_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetEndTangent_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndTangent_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_EndTangent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end tangent vector of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetEndTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetEndTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics
	{
		struct SplineMeshComponent_eventSetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InForwardAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetForwardAxis_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetForwardAxis_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_InForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "InForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetForwardAxis_Parms, InForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_InForwardAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the forward axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetForwardAxis_Parms), Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics
	{
		struct SplineMeshComponent_eventSetSplineUpDir_Parms
		{
			FVector InSplineUpDir;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSplineUpDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSplineUpDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetSplineUpDir_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetSplineUpDir_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir = { UE4CodeGen_Private::EPropertyClass::Struct, "InSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetSplineUpDir_Parms, InSplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the spline up direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetSplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(SplineMeshComponent_eventSetSplineUpDir_Parms), Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics
	{
		struct SplineMeshComponent_eventSetStartAndEnd_Parms
		{
			FVector StartPos;
			FVector StartTangent;
			FVector EndPos;
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartAndEnd_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartAndEnd_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start and end, position and tangent, all in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartAndEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartAndEnd_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics
	{
		struct SplineMeshComponent_eventSetStartOffset_Parms
		{
			FVector2D StartOffset;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartOffset_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartOffset_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartOffset_Parms, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_StartOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics
	{
		struct SplineMeshComponent_eventSetStartPosition_Parms
		{
			FVector StartPos;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartPosition_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartPosition_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Struct, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartPosition_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_StartPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start position of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics
	{
		struct SplineMeshComponent_eventSetStartRoll_Parms
		{
			float StartRoll;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartRoll_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartRoll_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_StartRoll = { UE4CodeGen_Private::EPropertyClass::Float, "StartRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartRoll_Parms, StartRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_StartRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start roll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartRoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SplineMeshComponent_eventSetStartRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics
	{
		struct SplineMeshComponent_eventSetStartScale_Parms
		{
			FVector2D StartScale;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartScale_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartScale_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_StartScale = { UE4CodeGen_Private::EPropertyClass::Struct, "StartScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartScale_Parms, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_StartScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "CPP_Default_StartScale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start scaling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartScale_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics
	{
		struct SplineMeshComponent_eventSetStartTangent_Parms
		{
			FVector StartTangent;
			bool bUpdateMesh;
		};
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartTangent_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SplineMeshComponent_eventSetStartTangent_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_StartTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartTangent_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_StartTangent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start tangent vector of spline in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "SetStartTangent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SplineMeshComponent_eventSetStartTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Update the collision and render state on the spline mesh following changes to its geometry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, "UpdateMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister()
	{
		return USplineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshDirty_MetaData[];
#endif
		static void NewProp_bMeshDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshDirty;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshBodySetupGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMeshBodySetupGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothInterpRollScale_MetaData[];
#endif
		static void NewProp_bSmoothInterpRollScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothInterpRollScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSplineEditingPerInstance_MetaData[];
#endif
		static void NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSplineEditingPerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineUpDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineUpDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax, "GetBoundaryMax" }, // 66052324
		{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin, "GetBoundaryMin" }, // 3147417314
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndOffset, "GetEndOffset" }, // 1207674977
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndPosition, "GetEndPosition" }, // 3999055612
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndRoll, "GetEndRoll" }, // 2713424783
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndScale, "GetEndScale" }, // 3882716877
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndTangent, "GetEndTangent" }, // 420857520
		{ &Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis, "GetForwardAxis" }, // 1522909217
		{ &Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir, "GetSplineUpDir" }, // 4018817433
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartOffset, "GetStartOffset" }, // 2266071610
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartPosition, "GetStartPosition" }, // 3625574044
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartRoll, "GetStartRoll" }, // 1355067502
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartScale, "GetStartScale" }, // 2483262099
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartTangent, "GetStartTangent" }, // 743374678
		{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax, "SetBoundaryMax" }, // 630267453
		{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin, "SetBoundaryMin" }, // 3550056541
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndOffset, "SetEndOffset" }, // 3017443690
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndPosition, "SetEndPosition" }, // 1563863676
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndRoll, "SetEndRoll" }, // 3510377331
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndScale, "SetEndScale" }, // 468806944
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndTangent, "SetEndTangent" }, // 1672655982
		{ &Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis, "SetForwardAxis" }, // 1577888773
		{ &Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir, "SetSplineUpDir" }, // 2109998113
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd, "SetStartAndEnd" }, // 1008604938
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartOffset, "SetStartOffset" }, // 2610122425
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartPosition, "SetStartPosition" }, // 2117343819
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartRoll, "SetStartRoll" }, // 604825717
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartScale, "SetStartScale" }, // 2517245555
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartTangent, "SetStartTangent" }, // 3193338535
		{ &Z_Construct_UFunction_USplineMeshComponent_UpdateMesh, "UpdateMesh" }, // 3902722245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Physics Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/SplineMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A Spline Mesh Component is a derivation of a Static Mesh Component which can be deformed using a spline. Only a start and end position (and tangent) can be specified.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Indicates that the mesh needs updating" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bMeshDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bMeshDirty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Used to automatically trigger rebuild of collision data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMeshBodySetupGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, CachedMeshBodySetupGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Physics data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Maximum coordinate along the spline forward axis which corresponds to end of spline. If set to 0.0, will use bounding box to determine bounds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax = { UE4CodeGen_Private::EPropertyClass::Float, "SplineBoundaryMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMax), METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Minimum coordinate along the spline forward axis which corresponds to start of spline. If set to 0.0, will use bounding box to determine bounds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin = { UE4CodeGen_Private::EPropertyClass::Float, "SplineBoundaryMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMin), METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "ForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "If true, will use smooth interpolation (ease in/out) for Scale, Roll, and Offset along this section of spline. If false, uses linear" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bSmoothInterpRollScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothInterpRollScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "If true, spline keys may be edited per instance in the level viewport. Otherwise, the spline should be initialized in the construction script." },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bAllowSplineEditingPerInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSplineEditingPerInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Axis (in component space) that is used to determine X axis for co-ordinates along spline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineUpDir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Spline that is used to deform mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineParams), Z_Construct_UScriptStruct_FSplineMeshParams, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USplineMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USplineMeshComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USplineMeshComponent_Statics::ClassParams = {
		&USplineMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USplineMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USplineMeshComponent, 3168716251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USplineMeshComponent(Z_Construct_UClass_USplineMeshComponent, &USplineMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USplineMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USplineMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
