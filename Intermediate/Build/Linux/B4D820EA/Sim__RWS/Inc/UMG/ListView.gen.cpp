// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ListView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListView() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UClass* Z_Construct_UClass_UListViewBase();
	UMG_API UFunction* Z_Construct_UFunction_UListView_AddItem();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_CancelScrollIntoView();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_ClearSelection();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_GetNumItemsSelected();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItem();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItems();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_IsItemVisible();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_NavigateToItem();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_ScrollItemIntoView();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_SetItemSelection();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_SetListItems();
	UMG_API UFunction* Z_Construct_UFunction_UListView_BP_SetSelectedItem();
	UMG_API UFunction* Z_Construct_UFunction_UListView_ClearListItems();
	UMG_API UFunction* Z_Construct_UFunction_UListView_GetIndexForItem();
	UMG_API UFunction* Z_Construct_UFunction_UListView_GetItemAt();
	UMG_API UFunction* Z_Construct_UFunction_UListView_GetListItems();
	UMG_API UFunction* Z_Construct_UFunction_UListView_GetNumItems();
	UMG_API UFunction* Z_Construct_UFunction_UListView_IsRefreshPending();
	UMG_API UFunction* Z_Construct_UFunction_UListView_NavigateToIndex();
	UMG_API UFunction* Z_Construct_UFunction_UListView_ScrollIndexIntoView();
	UMG_API UFunction* Z_Construct_UFunction_UListView_SetSelectedIndex();
	UMG_API UFunction* Z_Construct_UFunction_UListView_SetSelectionMode();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms
		{
			UObject* Item;
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnListItemScrolledIntoViewDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsHovered;
		};
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms*)Obj)->bIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHovered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_bIsHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnItemIsHoveredChangedDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsSelected;
		};
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnListItemSelectionChangedDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventSimpleListItemEventDynamic_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventSimpleListItemEventDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "SimpleListItemEventDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventSimpleListItemEventDynamic_Parms), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UListView::StaticRegisterNativesUListView()
	{
		UClass* Class = UListView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UListView::execAddItem },
			{ "BP_CancelScrollIntoView", &UListView::execBP_CancelScrollIntoView },
			{ "BP_ClearSelection", &UListView::execBP_ClearSelection },
			{ "BP_GetNumItemsSelected", &UListView::execBP_GetNumItemsSelected },
			{ "BP_GetSelectedItem", &UListView::execBP_GetSelectedItem },
			{ "BP_GetSelectedItems", &UListView::execBP_GetSelectedItems },
			{ "BP_IsItemVisible", &UListView::execBP_IsItemVisible },
			{ "BP_NavigateToItem", &UListView::execBP_NavigateToItem },
			{ "BP_ScrollItemIntoView", &UListView::execBP_ScrollItemIntoView },
			{ "BP_SetItemSelection", &UListView::execBP_SetItemSelection },
			{ "BP_SetListItems", &UListView::execBP_SetListItems },
			{ "BP_SetSelectedItem", &UListView::execBP_SetSelectedItem },
			{ "ClearListItems", &UListView::execClearListItems },
			{ "GetIndexForItem", &UListView::execGetIndexForItem },
			{ "GetItemAt", &UListView::execGetItemAt },
			{ "GetListItems", &UListView::execGetListItems },
			{ "GetNumItems", &UListView::execGetNumItems },
			{ "IsRefreshPending", &UListView::execIsRefreshPending },
			{ "NavigateToIndex", &UListView::execNavigateToIndex },
			{ "ScrollIndexIntoView", &UListView::execScrollIndexIntoView },
			{ "SetSelectedIndex", &UListView::execSetSelectedIndex },
			{ "SetSelectionMode", &UListView::execSetSelectionMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UListView_AddItem_Statics
	{
		struct ListView_eventAddItem_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventAddItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_AddItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Adds an the item to the list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "AddItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ListView_eventAddItem_Parms), Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Cancel Scroll Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Cancels a previous request to scroll and item into view." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_CancelScrollIntoView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_CancelScrollIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_CancelScrollIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Clear Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Clear selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_ClearSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics
	{
		struct ListView_eventBP_GetNumItemsSelected_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_GetNumItemsSelected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Get Num Items Selected" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the number of items currently selected in the list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_GetNumItemsSelected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(ListView_eventBP_GetNumItemsSelected_Parms), Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetNumItemsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_GetNumItemsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics
	{
		struct ListView_eventBP_GetSelectedItem_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_GetSelectedItem_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Get Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the first selected item, if any; recommended that you only use this for single selection lists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_GetSelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(ListView_eventBP_GetSelectedItem_Parms), Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics
	{
		struct ListView_eventBP_GetSelectedItems_Parms
		{
			TArray<UObject*> Items;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventBP_GetSelectedItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ListView_eventBP_GetSelectedItems_Parms), &Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_GetSelectedItems_Parms, Items), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::NewProp_Items_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "GetSelectedItems" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets a list of all the currently selected items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_GetSelectedItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44440401, sizeof(ListView_eventBP_GetSelectedItems_Parms), Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_GetSelectedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_GetSelectedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics
	{
		struct ListView_eventBP_IsItemVisible_Parms
		{
			UObject* Item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventBP_IsItemVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ListView_eventBP_IsItemVisible_Parms), &Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_IsItemVisible_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Is Item Visible" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets whether the entry for the given object is currently visible in the list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_IsItemVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(ListView_eventBP_IsItemVisible_Parms), Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_IsItemVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_IsItemVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics
	{
		struct ListView_eventBP_NavigateToItem_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_NavigateToItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Navigate To Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is navigated to, scrolling it into view if needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_NavigateToItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(ListView_eventBP_NavigateToItem_Parms), Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_NavigateToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_NavigateToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics
	{
		struct ListView_eventBP_ScrollItemIntoView_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_ScrollItemIntoView_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Scroll Item Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the given item is scrolled into view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_ScrollItemIntoView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(ListView_eventBP_ScrollItemIntoView_Parms), Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_ScrollItemIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_ScrollItemIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics
	{
		struct ListView_eventBP_SetItemSelection_Parms
		{
			UObject* Item;
			bool bSelected;
		};
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ListView_eventBP_SetItemSelection_Parms*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ListView_eventBP_SetItemSelection_Parms), &Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_SetItemSelection_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Set Item Selection" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets whether the given item is selected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_SetItemSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(ListView_eventBP_SetItemSelection_Parms), Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetItemSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_SetItemSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetListItems_Statics
	{
		struct ListView_eventBP_SetListItems_Parms
		{
			TArray<UObject*> InListItems;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InListItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InListItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InListItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems = { UE4CodeGen_Private::EPropertyClass::Array, "InListItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_SetListItems_Parms, InListItems), METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InListItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetListItems_Statics::NewProp_InListItems_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Set List Items" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the array of objects to display rows for in the list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_SetListItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04440401, sizeof(ListView_eventBP_SetListItems_Parms), Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_SetListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics
	{
		struct ListView_eventBP_SetSelectedItem_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventBP_SetSelectedItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ListView" },
		{ "DisplayName", "Set Selected Item" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the given item as the sole selected item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "BP_SetSelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(ListView_eventBP_SetSelectedItem_Parms), Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_BP_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_BP_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_ClearListItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Removes all items from the list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "ClearListItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_ClearListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_ClearListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_ClearListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetIndexForItem_Statics
	{
		struct ListView_eventGetIndexForItem_Parms
		{
			UObject* Item;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventGetIndexForItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetIndexForItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the index that the specified item is at. Will return the first found, or -1 for not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "GetIndexForItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ListView_eventGetIndexForItem_Parms), Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetIndexForItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetIndexForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_GetIndexForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetItemAt_Statics
	{
		struct ListView_eventGetItemAt_Parms
		{
			int32 Index;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventGetItemAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetItemAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the item at the given index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "GetItemAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ListView_eventGetItemAt_Parms), Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetItemAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetItemAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_GetItemAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetListItems_Statics
	{
		struct ListView_eventGetListItems_Parms
		{
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(ListView_eventGetListItems_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetListItems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Gets the list of all items in the list.\nNote that each of these items only has a corresponding entry widget when visible. Use GetDisplayedEntryWidgets to get the currently displayed widgets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "GetListItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ListView_eventGetListItems_Parms), Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetListItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetListItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_GetListItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_GetNumItems_Statics
	{
		struct ListView_eventGetNumItems_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ListView_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_GetNumItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Returns the total number of items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "GetNumItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ListView_eventGetNumItems_Parms), Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_GetNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_GetNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_GetNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_IsRefreshPending_Statics
	{
		struct ListView_eventIsRefreshPending_Parms
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
	void Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ListView_eventIsRefreshPending_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ListView_eventIsRefreshPending_Parms), &Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_IsRefreshPending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "@return True if a refresh is pending and the list will be rebuilt on the next tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "IsRefreshPending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ListView_eventIsRefreshPending_Parms), Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_IsRefreshPending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_IsRefreshPending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_IsRefreshPending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_NavigateToIndex_Statics
	{
		struct ListView_eventNavigateToIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventNavigateToIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_NavigateToIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index navigated to, scrolling it into view if needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "NavigateToIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ListView_eventNavigateToIndex_Parms), Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_NavigateToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_NavigateToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_NavigateToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics
	{
		struct ListView_eventScrollIndexIntoView_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventScrollIndexIntoView_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Requests that the item at the given index is scrolled into view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "ScrollIndexIntoView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ListView_eventScrollIndexIntoView_Parms), Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_ScrollIndexIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_ScrollIndexIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_SetSelectedIndex_Statics
	{
		struct ListView_eventSetSelectedIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the item at the given index as the sole selected item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "SetSelectedIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ListView_eventSetSelectedIndex_Parms), Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_SetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_SetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UListView_SetSelectionMode_Statics
	{
		struct ListView_eventSetSelectionMode_Parms
		{
			TEnumAsByte<ESelectionMode::Type> SelectionMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ListView_eventSetSelectionMode_Parms, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListView_SetSelectionMode_Statics::NewProp_SelectionMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ToolTip", "Sets the new selection mode, preserving the current selection where possible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListView, "SetSelectionMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ListView_eventSetSelectionMode_Parms), Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UListView_SetSelectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListView_SetSelectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListView_SetSelectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UListView_NoRegister()
	{
		return UListView::StaticClass();
	}
	struct Z_Construct_UClass_UListView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemScrolledIntoView_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemScrolledIntoView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemSelectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemSelectionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemIsHoveredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemIsHoveredChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemDoubleClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemDoubleClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntrySpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearSelectionOnClick_MetaData[];
#endif
		static void NewProp_bClearSelectionOnClick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearSelectionOnClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListViewBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UListView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UListView_AddItem, "AddItem" }, // 577026086
		{ &Z_Construct_UFunction_UListView_BP_CancelScrollIntoView, "BP_CancelScrollIntoView" }, // 3448876410
		{ &Z_Construct_UFunction_UListView_BP_ClearSelection, "BP_ClearSelection" }, // 1207813226
		{ &Z_Construct_UFunction_UListView_BP_GetNumItemsSelected, "BP_GetNumItemsSelected" }, // 3893195672
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItem, "BP_GetSelectedItem" }, // 304713598
		{ &Z_Construct_UFunction_UListView_BP_GetSelectedItems, "BP_GetSelectedItems" }, // 588513728
		{ &Z_Construct_UFunction_UListView_BP_IsItemVisible, "BP_IsItemVisible" }, // 3187202408
		{ &Z_Construct_UFunction_UListView_BP_NavigateToItem, "BP_NavigateToItem" }, // 3347718759
		{ &Z_Construct_UFunction_UListView_BP_ScrollItemIntoView, "BP_ScrollItemIntoView" }, // 1415948548
		{ &Z_Construct_UFunction_UListView_BP_SetItemSelection, "BP_SetItemSelection" }, // 2988660802
		{ &Z_Construct_UFunction_UListView_BP_SetListItems, "BP_SetListItems" }, // 2000642187
		{ &Z_Construct_UFunction_UListView_BP_SetSelectedItem, "BP_SetSelectedItem" }, // 4189056146
		{ &Z_Construct_UFunction_UListView_ClearListItems, "ClearListItems" }, // 1080732427
		{ &Z_Construct_UFunction_UListView_GetIndexForItem, "GetIndexForItem" }, // 3475701988
		{ &Z_Construct_UFunction_UListView_GetItemAt, "GetItemAt" }, // 1419385013
		{ &Z_Construct_UFunction_UListView_GetListItems, "GetListItems" }, // 3874879560
		{ &Z_Construct_UFunction_UListView_GetNumItems, "GetNumItems" }, // 1666486934
		{ &Z_Construct_UFunction_UListView_IsRefreshPending, "IsRefreshPending" }, // 3341730555
		{ &Z_Construct_UFunction_UListView_NavigateToIndex, "NavigateToIndex" }, // 1930114182
		{ &Z_Construct_UFunction_UListView_ScrollIndexIntoView, "ScrollIndexIntoView" }, // 83828395
		{ &Z_Construct_UFunction_UListView_SetSelectedIndex, "SetSelectedIndex" }, // 4154979307
		{ &Z_Construct_UFunction_UListView_SetSelectionMode, "SetSelectionMode" }, // 1844197561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::Class_MetaDataParams[] = {
		{ "EntryInterface", "UserObjectListEntry" },
		{ "IncludePath", "Components/ListView.h" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A virtualized list that allows up to thousands of items to be displayed.\n\nAn important distinction to keep in mind here is \"Item\" vs. \"Entry\"\nThe list itself is based on a list of n items, but only creates as many entry widgets as can fit on screen.\nFor example, a scrolling ListView of 200 items with 5 currently visible will only have created 5 entry widgets.\n\nTo make a widget usable an an entry in a ListView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Scrolled Into View" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemScrolledIntoView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UListView, BP_OnItemScrolledIntoView), Z_Construct_UDelegateFunction_UMG_OnListItemScrolledIntoViewDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UListView, BP_OnItemSelectionChanged), Z_Construct_UDelegateFunction_UMG_OnListItemSelectionChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Is Hovered Changed" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemIsHoveredChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UListView, BP_OnItemIsHoveredChanged), Z_Construct_UDelegateFunction_UMG_OnItemIsHoveredChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Double Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemDoubleClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UListView, BP_OnItemDoubleClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Item Clicked" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UListView, BP_OnItemClicked), Z_Construct_UDelegateFunction_UMG_SimpleListItemEventDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems = { UE4CodeGen_Private::EPropertyClass::Array, "ListItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UListView, ListItems), METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_ListItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing = { UE4CodeGen_Private::EPropertyClass::Float, "EntrySpacing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UListView, EntrySpacing), METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	void Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit(void* Obj)
	{
		((UListView*)Obj)->bClearSelectionOnClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearSelectionOnClick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UListView), &Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel = { UE4CodeGen_Private::EPropertyClass::Enum, "ConsumeMouseWheel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UListView, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData[] = {
		{ "Category", "ListView" },
		{ "ModuleRelativePath", "Public/Components/ListView.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UListView, SelectionMode), Z_Construct_UEnum_Slate_ESelectionMode, METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemScrolledIntoView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemSelectionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemIsHoveredChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemDoubleClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_BP_OnItemClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ListItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_EntrySpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_bClearSelectionOnClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_ConsumeMouseWheel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListView_Statics::NewProp_SelectionMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UListView_Statics::ClassParams = {
		&UListView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UListView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UListView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UListView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UListView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UListView, 1804333632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UListView(Z_Construct_UClass_UListView, &UListView::StaticClass, TEXT("/Script/UMG"), TEXT("UListView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
