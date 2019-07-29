// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TreeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeView() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UFunction* Z_Construct_UFunction_UTreeView_CollapseAll();
	UMG_API UFunction* Z_Construct_UFunction_UTreeView_ExpandAll();
	UMG_API UFunction* Z_Construct_UFunction_UTreeView_SetItemExpansion();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsExpanded;
		};
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnItemExpansionChangedDynamic_Parms*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnItemExpansionChangedDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms
		{
			UObject* Item;
			TArray<UObject*> Children;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Children), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnGetItemChildrenDynamic__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_UMG_eventOnGetItemChildrenDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UTreeView::StaticRegisterNativesUTreeView()
	{
		UClass* Class = UTreeView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollapseAll", &UTreeView::execCollapseAll },
			{ "ExpandAll", &UTreeView::execExpandAll },
			{ "SetItemExpansion", &UTreeView::execSetItemExpansion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeView_CollapseAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Collapses all currently expanded items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, "CollapseAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_CollapseAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_ExpandAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Expands all items with children" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, "ExpandAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_ExpandAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics
	{
		struct TreeView_eventSetItemExpansion_Parms
		{
			UObject* Item;
			bool bExpandItem;
		};
		static void NewProp_bExpandItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit(void* Obj)
	{
		((TreeView_eventSetItemExpansion_Parms*)Obj)->bExpandItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem = { UE4CodeGen_Private::EPropertyClass::Bool, "bExpandItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TreeView_eventSetItemExpansion_Parms), &Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Object, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TreeView_eventSetItemExpansion_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Attempts to expand/collapse the given item (only relevant if the item has children)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, "SetItemExpansion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TreeView_eventSetItemExpansion_Parms), Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_SetItemExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeView_NoRegister()
	{
		return UTreeView::StaticClass();
	}
	struct Z_Construct_UClass_UTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemExpansionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemExpansionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnGetItemChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BP_OnGetItemChildren;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeView_CollapseAll, "CollapseAll" }, // 1822080015
		{ &Z_Construct_UFunction_UTreeView_ExpandAll, "ExpandAll" }, // 2481358875
		{ &Z_Construct_UFunction_UTreeView_SetItemExpansion, "SetItemExpansion" }, // 2218175077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/TreeView.h" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Similar to ListView, but can display a hierarchical tree of elements.\nThe base items source for the tree identifies the root items, each of which can have n associated child items.\nThere is no hard limit to the nesting - child items can have children and so on" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnItemExpansionChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UTreeView, BP_OnItemExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "DisplayName", "On Get Item Children" },
		{ "IsBindableEvent", "" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren = { UE4CodeGen_Private::EPropertyClass::Delegate, "BP_OnGetItemChildren", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080001, 1, nullptr, STRUCT_OFFSET(UTreeView, BP_OnGetItemChildren), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeView_Statics::ClassParams = {
		&UTreeView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTreeView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeView, 835995133);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeView(Z_Construct_UClass_UTreeView, &UTreeView::StaticClass, TEXT("/Script/UMG"), TEXT("UTreeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
