// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CanvasPanelSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder();
// End Cross Module References
class UScriptStruct* FAnchorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorData, Z_Construct_UPackage__Script_UMG(), TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchorData(FAnchorData::StaticStruct, TEXT("/Script/UMG"), TEXT("AnchorData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFAnchorData
{
	FScriptStruct_UMG_StaticRegisterNativesFAnchorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnchorData")),new UScriptStruct::TCppStructOps<FAnchorData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFAnchorData;
	struct Z_Construct_UScriptStruct_FAnchorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnchorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\nending in the lower right at (1,1).  Moving the alignment point allows you to move\nthe origin of the widget." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment = { UE4CodeGen_Private::EPropertyClass::Struct, "Alignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Anchors." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors = { UE4CodeGen_Private::EPropertyClass::Struct, "Anchors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Offset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets = { UE4CodeGen_Private::EPropertyClass::Struct, "Offsets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"AnchorData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnchorData),
		alignof(FAnchorData),
		Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnchorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnchorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC() { return 2883160911U; }
	void UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot()
	{
		UClass* Class = UCanvasPanelSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlignment", &UCanvasPanelSlot::execGetAlignment },
			{ "GetAnchors", &UCanvasPanelSlot::execGetAnchors },
			{ "GetAutoSize", &UCanvasPanelSlot::execGetAutoSize },
			{ "GetLayout", &UCanvasPanelSlot::execGetLayout },
			{ "GetOffsets", &UCanvasPanelSlot::execGetOffsets },
			{ "GetPosition", &UCanvasPanelSlot::execGetPosition },
			{ "GetSize", &UCanvasPanelSlot::execGetSize },
			{ "GetZOrder", &UCanvasPanelSlot::execGetZOrder },
			{ "SetAlignment", &UCanvasPanelSlot::execSetAlignment },
			{ "SetAnchors", &UCanvasPanelSlot::execSetAnchors },
			{ "SetAutoSize", &UCanvasPanelSlot::execSetAutoSize },
			{ "SetLayout", &UCanvasPanelSlot::execSetLayout },
			{ "SetMaximum", &UCanvasPanelSlot::execSetMaximum },
			{ "SetMinimum", &UCanvasPanelSlot::execSetMinimum },
			{ "SetOffsets", &UCanvasPanelSlot::execSetOffsets },
			{ "SetPosition", &UCanvasPanelSlot::execSetPosition },
			{ "SetSize", &UCanvasPanelSlot::execSetSize },
			{ "SetZOrder", &UCanvasPanelSlot::execSetZOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics
	{
		struct CanvasPanelSlot_eventGetAlignment_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the alignment on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetAlignment_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics
	{
		struct CanvasPanelSlot_eventGetAnchors_Parms
		{
			FAnchors ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetAnchors_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAnchors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetAnchors_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics
	{
		struct CanvasPanelSlot_eventGetAutoSize_Parms
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
	void Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CanvasPanelSlot_eventGetAutoSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets if the slot to be auto-sized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics
	{
		struct CanvasPanelSlot_eventGetLayout_Parms
		{
			FAnchorData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the layout data of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetLayout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetLayout_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics
	{
		struct CanvasPanelSlot_eventGetOffsets_Parms
		{
			FMargin ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetOffsets_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics
	{
		struct CanvasPanelSlot_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the position of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetPosition_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics
	{
		struct CanvasPanelSlot_eventGetSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the size of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics
	{
		struct CanvasPanelSlot_eventGetZOrder_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetZOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the z-order on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetZOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetZOrder_Parms), Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics
	{
		struct CanvasPanelSlot_eventSetAlignment_Parms
		{
			FVector2D InAlignment;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment = { UE4CodeGen_Private::EPropertyClass::Struct, "InAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetAlignment_Parms, InAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the alignment on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetAlignment_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics
	{
		struct CanvasPanelSlot_eventSetAnchors_Parms
		{
			FAnchors InAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InAnchors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetAnchors_Parms, InAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAnchors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetAnchors_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics
	{
		struct CanvasPanelSlot_eventSetAutoSize_Parms
		{
			bool InbAutoSize;
		};
		static void NewProp_InbAutoSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbAutoSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit(void* Obj)
	{
		((CanvasPanelSlot_eventSetAutoSize_Parms*)Obj)->InbAutoSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize = { UE4CodeGen_Private::EPropertyClass::Bool, "InbAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets if the slot to be auto-sized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics
	{
		struct CanvasPanelSlot_eventSetLayout_Parms
		{
			FAnchorData InLayoutData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLayoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLayoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData = { UE4CodeGen_Private::EPropertyClass::Struct, "InLayoutData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetLayout_Parms, InLayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the layout data of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetLayout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CanvasPanelSlot_eventSetLayout_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics
	{
		struct CanvasPanelSlot_eventSetMaximum_Parms
		{
			FVector2D InMaximumAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMaximumAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InMaximumAnchors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetMaximum_Parms, InMaximumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetMaximum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(CanvasPanelSlot_eventSetMaximum_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics
	{
		struct CanvasPanelSlot_eventSetMinimum_Parms
		{
			FVector2D InMinimumAnchors;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMinimumAnchors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InMinimumAnchors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetMinimum_Parms, InMinimumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetMinimum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(CanvasPanelSlot_eventSetMinimum_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics
	{
		struct CanvasPanelSlot_eventSetOffsets_Parms
		{
			FMargin InOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "InOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetOffsets_Parms, InOffset), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetOffsets_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics
	{
		struct CanvasPanelSlot_eventSetPosition_Parms
		{
			FVector2D InPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the position of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetPosition_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics
	{
		struct CanvasPanelSlot_eventSetSize_Parms
		{
			FVector2D InSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize = { UE4CodeGen_Private::EPropertyClass::Struct, "InSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the size of the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetSize_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics
	{
		struct CanvasPanelSlot_eventSetZOrder_Parms
		{
			int32 InZOrder;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder = { UE4CodeGen_Private::EPropertyClass::Int, "InZOrder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetZOrder_Parms, InZOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the z-order on the slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetZOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetZOrder_Parms), Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister()
	{
		return UCanvasPanelSlot::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasPanelSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSize_MetaData[];
#endif
		static void NewProp_bAutoSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasPanelSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvasPanelSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment, "GetAlignment" }, // 146165976
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors, "GetAnchors" }, // 150881299
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize, "GetAutoSize" }, // 2662622391
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetLayout, "GetLayout" }, // 928186636
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets, "GetOffsets" }, // 2878784943
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetPosition, "GetPosition" }, // 1239961559
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetSize, "GetSize" }, // 698662426
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder, "GetZOrder" }, // 163986863
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment, "SetAlignment" }, // 2574274267
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors, "SetAnchors" }, // 1159205667
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize, "SetAutoSize" }, // 3169443323
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetLayout, "SetLayout" }, // 3938077518
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum, "SetMaximum" }, // 3088745977
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum, "SetMinimum" }, // 3060693228
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets, "SetOffsets" }, // 2448611993
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetPosition, "SetPosition" }, // 1056772766
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetSize, "SetSize" }, // 680962577
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder, "SetZOrder" }, // 105752227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CanvasPanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder = { UE4CodeGen_Private::EPropertyClass::Int, "ZOrder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCanvasPanelSlot, ZOrder), METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "DisplayName", "Size To Content" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "When AutoSize is true we use the widget's desired size" },
	};
#endif
	void Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit(void* Obj)
	{
		((UCanvasPanelSlot*)Obj)->bAutoSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCanvasPanelSlot), &Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The anchoring information for the slot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData = { UE4CodeGen_Private::EPropertyClass::Struct, "LayoutData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCanvasPanelSlot, LayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasPanelSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanelSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams = {
		&UCanvasPanelSlot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasPanelSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanvasPanelSlot, 335513962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasPanelSlot(Z_Construct_UClass_UCanvasPanelSlot, &UCanvasPanelSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UCanvasPanelSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanelSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
