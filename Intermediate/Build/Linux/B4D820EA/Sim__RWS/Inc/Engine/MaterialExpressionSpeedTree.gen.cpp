// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSpeedTree.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpeedTree() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ESpeedTreeLODType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeLODType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeLODType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeLODType(ESpeedTreeLODType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeLODType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeLODType_CRC() { return 2944156153U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeLODType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeLODType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STLOD_Pop", (int64)STLOD_Pop },
				{ "STLOD_Smooth", (int64)STLOD_Smooth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STLOD_Pop.DisplayName", "Pop" },
				{ "STLOD_Smooth.DisplayName", "Smooth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeLODType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeLODType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeedTreeWindType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeWindType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeWindType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeWindType(ESpeedTreeWindType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeWindType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeWindType_CRC() { return 1096929148U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeWindType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeWindType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STW_None", (int64)STW_None },
				{ "STW_Fastest", (int64)STW_Fastest },
				{ "STW_Fast", (int64)STW_Fast },
				{ "STW_Better", (int64)STW_Better },
				{ "STW_Best", (int64)STW_Best },
				{ "STW_Palm", (int64)STW_Palm },
				{ "STW_BestPlus", (int64)STW_BestPlus },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STW_Best.DisplayName", "Best" },
				{ "STW_BestPlus.DisplayName", "BestPlus" },
				{ "STW_Better.DisplayName", "Better" },
				{ "STW_Fast.DisplayName", "Fast" },
				{ "STW_Fastest.DisplayName", "Fastest" },
				{ "STW_None.DisplayName", "None" },
				{ "STW_Palm.DisplayName", "Palm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeWindType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeWindType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeedTreeGeometryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeGeometryType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeGeometryType(ESpeedTreeGeometryType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeGeometryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_CRC() { return 1117317569U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeGeometryType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STG_Branch", (int64)STG_Branch },
				{ "STG_Frond", (int64)STG_Frond },
				{ "STG_Leaf", (int64)STG_Leaf },
				{ "STG_FacingLeaf", (int64)STG_FacingLeaf },
				{ "STG_Billboard", (int64)STG_Billboard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STG_Billboard.DisplayName", "Billboard" },
				{ "STG_Branch.DisplayName", "Branch" },
				{ "STG_FacingLeaf.DisplayName", "Facing Leaf" },
				{ "STG_Frond.DisplayName", "Frond" },
				{ "STG_Leaf.DisplayName", "Leaf" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeGeometryType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeGeometryType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionSpeedTree::StaticRegisterNativesUMaterialExpressionSpeedTree()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister()
	{
		return UMaterialExpressionSpeedTree::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccurateWindVelocities_MetaData[];
#endif
		static void NewProp_bAccurateWindVelocities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccurateWindVelocities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BillboardThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraBendWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraBendWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSpeedTree.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Accurate Wind Velocities" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "Support accurate velocities from wind. This will incur extra cost per vertex." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit(void* Obj)
	{
		((UMaterialExpressionSpeedTree*)Obj)->bAccurateWindVelocities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities = { UE4CodeGen_Private::EPropertyClass::Bool, "bAccurateWindVelocities", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialExpressionSpeedTree), &Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Billboard Threshold" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The threshold for triangles to be removed from the bilboard mesh when not facing the camera (0 = none pass, 1 = all pass)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BillboardThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, BillboardThreshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "LOD Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of LOD to use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType = { UE4CodeGen_Private::EPropertyClass::Byte, "LODType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODType), Z_Construct_UEnum_Engine_ESpeedTreeLODType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Wind Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of wind effect used on this tree. This can only go as high as it was in the SpeedTree Modeler, but you can set it to a lower option for lower quality wind and faster rendering." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType = { UE4CodeGen_Private::EPropertyClass::Byte, "WindType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindType), Z_Construct_UEnum_Engine_ESpeedTreeWindType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Geometry Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of SpeedTree geometry on which this material will be used" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType = { UE4CodeGen_Private::EPropertyClass::Byte, "GeometryType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryType), Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "An extra bending of the tree for local effects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtraBendWS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, ExtraBendWS), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'LODType' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput = { UE4CodeGen_Private::EPropertyClass::Struct, "LODInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'GeometryType' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput = { UE4CodeGen_Private::EPropertyClass::Struct, "WindInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'WindType' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput = { UE4CodeGen_Private::EPropertyClass::Struct, "GeometryInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSpeedTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams = {
		&UMaterialExpressionSpeedTree::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSpeedTree, 3624320514);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSpeedTree(Z_Construct_UClass_UMaterialExpressionSpeedTree, &UMaterialExpressionSpeedTree::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSpeedTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpeedTree);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionSpeedTree)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
