// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeGrassType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassType() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EGrassScaling();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EGrassScaling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EGrassScaling, Z_Construct_UPackage__Script_Landscape(), TEXT("EGrassScaling"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrassScaling(EGrassScaling_StaticEnum, TEXT("/Script/Landscape"), TEXT("EGrassScaling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_EGrassScaling_CRC() { return 3479109596U; }
	UEnum* Z_Construct_UEnum_Landscape_EGrassScaling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrassScaling"), 0, Get_Z_Construct_UEnum_Landscape_EGrassScaling_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrassScaling::Uniform", (int64)EGrassScaling::Uniform },
				{ "EGrassScaling::Free", (int64)EGrassScaling::Free },
				{ "EGrassScaling::LockXY", (int64)EGrassScaling::LockXY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Free.ToolTip", "Grass instances will have random X, Y and Z scales." },
				{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "Uniform.ToolTip", "Grass instances will have uniform X, Y and Z scales." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrassScaling",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGrassScaling",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGrassVariety::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassVariety, Z_Construct_UPackage__Script_Landscape(), TEXT("GrassVariety"), sizeof(FGrassVariety), Get_Z_Construct_UScriptStruct_FGrassVariety_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrassVariety(FGrassVariety::StaticStruct, TEXT("/Script/Landscape"), TEXT("GrassVariety"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFGrassVariety
{
	FScriptStruct_Landscape_StaticRegisterNativesFGrassVariety()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GrassVariety")),new UScriptStruct::TCppStructOps<FGrassVariety>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFGrassVariety;
	struct Z_Construct_UScriptStruct_FGrassVariety_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepInstanceBufferCPUCopy_MetaData[];
#endif
		static void NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepInstanceBufferCPUCopy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[];
#endif
		static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeLightmap_MetaData[];
#endif
		static void NewProp_bUseLandscapeLightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeLightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[];
#endif
		static void NewProp_AlignToSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[];
#endif
		static void NewProp_RandomRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scaling;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[];
#endif
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrassDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrassVariety_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassVariety>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether we should keep a cpu copy of the instance buffer. This should be set to true if you plan on using GetOverlappingXXXXCount functions of the component otherwise it won't return any data.*" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bKeepInstanceBufferCPUCopy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepInstanceBufferCPUCopy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass should cast shadows when using non-precomputed shadowing. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bCastDynamicShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDynamicShadow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should receive decals." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bReceivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals = { UE4CodeGen_Private::EPropertyClass::Bool, "bReceivesDecals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether to use the landscape's lightmap when rendering the grass." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bUseLandscapeLightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLandscapeLightmap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->AlignToSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "AlignToSurface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->RandomRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "RandomRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies grass instance scaling type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling = { UE4CodeGen_Private::EPropertyClass::Enum, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, Scaling), Z_Construct_UEnum_Landscape_EGrassScaling, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "8" },
		{ "ClampMin", "4294967295" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nIf -1 (default), the MinLOD of the static mesh asset will be used instead." },
		{ "UIMax", "8" },
		{ "UIMin", "4294967295" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "MinLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, MinLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, EndCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, StartCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bUseGrid" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter = { UE4CodeGen_Private::EPropertyClass::Float, "PlacementJitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, PlacementJitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "If true, use a jittered grid sequence for placement, otherwise use a halton sequence." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bUseGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Instances per 10 square meters." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity = { UE4CodeGen_Private::EPropertyClass::Struct, "GrassDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, GrassDensity), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GrassMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, GrassMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassVariety_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"GrassVariety",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGrassVariety),
		alignof(FGrassVariety),
		Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrassVariety"), sizeof(FGrassVariety), Get_Z_Construct_UScriptStruct_FGrassVariety_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGrassVariety_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC() { return 1588638968U; }
	void ULandscapeGrassType::StaticRegisterNativesULandscapeGrassType()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister()
	{
		return ULandscapeGrassType::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGrassType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[];
#endif
		static void NewProp_AlignToSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[];
#endif
		static void NewProp_RandomRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrassDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassVarieties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrassVarieties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrassVarieties_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGrassType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGrassType.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->AlignToSurface_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "AlignToSurface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->RandomRotation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "RandomRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, EndCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, StartCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter = { UE4CodeGen_Private::EPropertyClass::Float, "PlacementJitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, PlacementJitter_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity = { UE4CodeGen_Private::EPropertyClass::Float, "GrassDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassDensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GrassMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether this grass type should be affected by the Engine Scalability system's Foliage grass.DensityScale setting.\nThis is enabled by default but can be disabled should this grass type be important for gameplay reasons." },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->bEnableDensityScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDensityScaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties = { UE4CodeGen_Private::EPropertyClass::Array, "GrassVarieties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassVarieties), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GrassVarieties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGrassVariety, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGrassType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams = {
		&ULandscapeGrassType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGrassType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeGrassType, 1307954453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeGrassType(Z_Construct_UClass_ULandscapeGrassType, &ULandscapeGrassType::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeGrassType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
