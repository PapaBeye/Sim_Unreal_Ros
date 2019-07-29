// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Brush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrush() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECsgOper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EBrushType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType, Z_Construct_UPackage__Script_Engine(), TEXT("EBrushType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBrushType(EBrushType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBrushType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBrushType_CRC() { return 4128967506U; }
	UEnum* Z_Construct_UEnum_Engine_EBrushType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBrushType"), 0, Get_Z_Construct_UEnum_Engine_EBrushType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Brush_Default", (int64)Brush_Default },
				{ "Brush_Add", (int64)Brush_Add },
				{ "Brush_Subtract", (int64)Brush_Subtract },
				{ "Brush_MAX", (int64)Brush_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Brush_Add.DisplayName", "Additive" },
				{ "Brush_Add.ToolTip", "Add to world." },
				{ "Brush_Default.Hidden", "" },
				{ "Brush_Default.ToolTip", "Default/builder brush." },
				{ "Brush_Subtract.DisplayName", "Subtractive" },
				{ "Brush_Subtract.ToolTip", "Subtract from world." },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBrushType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBrushType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECsgOper_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper, Z_Construct_UPackage__Script_Engine(), TEXT("ECsgOper"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECsgOper(ECsgOper_StaticEnum, TEXT("/Script/Engine"), TEXT("ECsgOper"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECsgOper_CRC() { return 4004901148U; }
	UEnum* Z_Construct_UEnum_Engine_ECsgOper()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECsgOper"), 0, Get_Z_Construct_UEnum_Engine_ECsgOper_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CSG_Active", (int64)CSG_Active },
				{ "CSG_Add", (int64)CSG_Add },
				{ "CSG_Subtract", (int64)CSG_Subtract },
				{ "CSG_Intersect", (int64)CSG_Intersect },
				{ "CSG_Deintersect", (int64)CSG_Deintersect },
				{ "CSG_None", (int64)CSG_None },
				{ "CSG_MAX", (int64)CSG_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CSG_Active.ToolTip", "Active brush. (deprecated, do not use.)" },
				{ "CSG_Add.ToolTip", "Add to world. (deprecated, do not use.)" },
				{ "CSG_Deintersect.ToolTip", "Form from negative intersection with world." },
				{ "CSG_Intersect.ToolTip", "Form from intersection with world." },
				{ "CSG_Subtract.ToolTip", "Subtract from world. (deprecated, do not use.)" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Variables." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECsgOper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECsgOper",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGeomSelection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomSelection, Z_Construct_UPackage__Script_Engine(), TEXT("GeomSelection"), sizeof(FGeomSelection), Get_Z_Construct_UScriptStruct_FGeomSelection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeomSelection(FGeomSelection::StaticStruct, TEXT("/Script/Engine"), TEXT("GeomSelection"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGeomSelection
{
	FScriptStruct_Engine_StaticRegisterNativesFGeomSelection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeomSelection")),new UScriptStruct::TCppStructOps<FGeomSelection>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGeomSelection;
	struct Z_Construct_UScriptStruct_FGeomSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Selection information for geometry mode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeomSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomSelection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Index into the geometry data structures" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SelectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, SelectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "EGeometrySelectionType_" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Int, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GeomSelection",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGeomSelection),
		alignof(FGeomSelection),
		Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeomSelection"), sizeof(FGeomSelection), Get_Z_Construct_UScriptStruct_FGeomSelection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeomSelection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC() { return 3716770348U; }
	void ABrush::StaticRegisterNativesABrush()
	{
	}
	UClass* Z_Construct_UClass_ABrush_NoRegister()
	{
		return ABrush::StaticClass();
	}
	struct Z_Construct_UClass_ABrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedSelections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedSelections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedSelections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInManipulation_MetaData[];
#endif
		static void NewProp_bInManipulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInManipulation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushBuilder;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotForClientOrServer_MetaData[];
#endif
		static void NewProp_bNotForClientOrServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotForClientOrServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceableFromClassBrowser_MetaData[];
#endif
		static void NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceableFromClassBrowser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSolidWhenSelected_MetaData[];
#endif
		static void NewProp_bSolidWhenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSolidWhenSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColored_MetaData[];
#endif
		static void NewProp_bColored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BrushType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/Brush.h" },
		{ "IsBlueprintBase", "false" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Stores selection information from geometry mode.  This is the only information that we can't\nregenerate by looking at the source brushes following an undo operation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections = { UE4CodeGen_Private::EPropertyClass::Array, "SavedSelections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, SavedSelections), METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SavedSelections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGeomSelection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.)" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bInManipulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bInManipulation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData[] = {
		{ "Category", "BrushBuilder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder = { UE4CodeGen_Private::EPropertyClass::Object, "BrushBuilder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(ABrush, BrushBuilder), Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BrushComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ABrush, BrushComponent), Z_Construct_UClass_UBrushComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Object, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000080008, 1, nullptr, STRUCT_OFFSET(ABrush, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush is a builder or otherwise does not need to be loaded into the game" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bNotForClientOrServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotForClientOrServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush class can be placed using the class browser like other simple class types" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bPlaceableFromClassBrowser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaceableFromClassBrowser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bSolidWhenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSolidWhenSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	void Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit(void* Obj)
	{
		((ABrush*)Obj)->bColored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bColored = { UE4CodeGen_Private::EPropertyClass::Bool, "bColored", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_bColored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags = { UE4CodeGen_Private::EPropertyClass::Int, "PolyFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, PolyFlags), METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BrushColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, BrushColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Type of brush" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushType = { UE4CodeGen_Private::EPropertyClass::Byte, "BrushType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABrush, BrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::NewProp_BrushType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bColored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrush_Statics::ClassParams = {
		&ABrush::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrush, 2142343722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrush(Z_Construct_UClass_ABrush, &ABrush::StaticClass, TEXT("/Script/Engine"), TEXT("ABrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
