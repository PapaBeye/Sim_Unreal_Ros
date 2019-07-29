// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EConsumeMouseWheel();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnUserScrolledEvent_Parms
		{
			float CurrentOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnUserScrolledEvent_Parms, CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::NewProp_CurrentOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnUserScrolledEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnUserScrolledEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UScrollBox::StaticRegisterNativesUScrollBox()
	{
		UClass* Class = UScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScrollOffset", &UScrollBox::execGetScrollOffset },
			{ "GetViewOffsetFraction", &UScrollBox::execGetViewOffsetFraction },
			{ "ScrollToEnd", &UScrollBox::execScrollToEnd },
			{ "ScrollToStart", &UScrollBox::execScrollToStart },
			{ "ScrollWidgetIntoView", &UScrollBox::execScrollWidgetIntoView },
			{ "SetAllowOverscroll", &UScrollBox::execSetAllowOverscroll },
			{ "SetAlwaysShowScrollbar", &UScrollBox::execSetAlwaysShowScrollbar },
			{ "SetOrientation", &UScrollBox::execSetOrientation },
			{ "SetScrollbarThickness", &UScrollBox::execSetScrollbarThickness },
			{ "SetScrollBarVisibility", &UScrollBox::execSetScrollBarVisibility },
			{ "SetScrollOffset", &UScrollBox::execSetScrollOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics
	{
		struct ScrollBox_eventGetScrollOffset_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventGetScrollOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Gets the scroll offset of the scrollbox in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "GetScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ScrollBox_eventGetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics
	{
		struct ScrollBox_eventGetViewOffsetFraction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventGetViewOffsetFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "GetViewOffsetFraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ScrollBox_eventGetViewOffsetFraction_Parms), Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the bottom instantly during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollToEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the top instantly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollToStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics
	{
		struct ScrollBox_eventScrollWidgetIntoView_Parms
		{
			UWidget* WidgetToFind;
			bool AnimateScroll;
			EDescendantScrollDestination ScrollDestination;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollDestination_Underlying;
		static void NewProp_AnimateScroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AnimateScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination = { UE4CodeGen_Private::EPropertyClass::Enum, "ScrollDestination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, ScrollDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit(void* Obj)
	{
		((ScrollBox_eventScrollWidgetIntoView_Parms*)Obj)->AnimateScroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll = { UE4CodeGen_Private::EPropertyClass::Bool, "AnimateScroll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetToFind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventScrollWidgetIntoView_Parms, WidgetToFind), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_ScrollDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_AnimateScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::NewProp_WidgetToFind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "CPP_Default_AnimateScroll", "true" },
		{ "CPP_Default_ScrollDestination", "IntoView" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Scrolls the ScrollBox to the widget during the next layout pass." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "ScrollWidgetIntoView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventScrollWidgetIntoView_Parms), Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics
	{
		struct ScrollBox_eventSetAllowOverscroll_Parms
		{
			bool NewAllowOverscroll;
		};
		static void NewProp_NewAllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAllowOverscroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAllowOverscroll_Parms*)Obj)->NewAllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll = { UE4CodeGen_Private::EPropertyClass::Bool, "NewAllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventSetAllowOverscroll_Parms), &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::NewProp_NewAllowOverscroll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetAllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetAllowOverscroll_Parms), Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAllowOverscroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAllowOverscroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics
	{
		struct ScrollBox_eventSetAlwaysShowScrollbar_Parms
		{
			bool NewAlwaysShowScrollbar;
		};
		static void NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAlwaysShowScrollbar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit(void* Obj)
	{
		((ScrollBox_eventSetAlwaysShowScrollbar_Parms*)Obj)->NewAlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar = { UE4CodeGen_Private::EPropertyClass::Bool, "NewAlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::NewProp_NewAlwaysShowScrollbar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetAlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetAlwaysShowScrollbar_Parms), Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetOrientation_Statics
	{
		struct ScrollBox_eventSetOrientation_Parms
		{
			TEnumAsByte<EOrientation> NewOrientation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation = { UE4CodeGen_Private::EPropertyClass::Byte, "NewOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetOrientation_Parms, NewOrientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::NewProp_NewOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetOrientation_Parms), Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics
	{
		struct ScrollBox_eventSetScrollbarThickness_Parms
		{
			FVector2D NewScrollbarThickness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScrollbarThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness = { UE4CodeGen_Private::EPropertyClass::Struct, "NewScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollbarThickness_Parms, NewScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::NewProp_NewScrollbarThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(ScrollBox_eventSetScrollbarThickness_Parms), Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollbarThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollbarThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics
	{
		struct ScrollBox_eventSetScrollBarVisibility_Parms
		{
			ESlateVisibility NewScrollBarVisibility;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewScrollBarVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "NewScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollBarVisibility_Parms, NewScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::NewProp_NewScrollBarVisibility_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetScrollBarVisibility_Parms), Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics
	{
		struct ScrollBox_eventSetScrollOffset_Parms
		{
			float NewScrollOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScrollOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NewScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScrollBox_eventSetScrollOffset_Parms, NewScrollOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::NewProp_NewScrollOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Updates the scroll offset of the scrollbox.\n@param NewScrollOffset is in Slate Units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBox, "SetScrollOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScrollBox_eventSetScrollOffset_Parms), Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBox_SetScrollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScrollBox_SetScrollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScrollBox_NoRegister()
	{
		return UScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserScrolled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserScrolled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRightClickDragScrolling_MetaData[];
#endif
		static void NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRightClickDragScrolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationScrollPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigationScrollPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationDestination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationDestination_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowOverscroll_MetaData[];
#endif
		static void NewProp_AllowOverscroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverscroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysShowScrollbar_MetaData[];
#endif
		static void NewProp_AlwaysShowScrollbar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysShowScrollbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollbarThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollbarThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumeMouseWheel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConsumeMouseWheel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConsumeMouseWheel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScrollBarVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScrollBarVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetBarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetBarStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScrollBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBox_GetScrollOffset, "GetScrollOffset" }, // 2727476946
		{ &Z_Construct_UFunction_UScrollBox_GetViewOffsetFraction, "GetViewOffsetFraction" }, // 4233382362
		{ &Z_Construct_UFunction_UScrollBox_ScrollToEnd, "ScrollToEnd" }, // 3841775538
		{ &Z_Construct_UFunction_UScrollBox_ScrollToStart, "ScrollToStart" }, // 612052593
		{ &Z_Construct_UFunction_UScrollBox_ScrollWidgetIntoView, "ScrollWidgetIntoView" }, // 461496379
		{ &Z_Construct_UFunction_UScrollBox_SetAllowOverscroll, "SetAllowOverscroll" }, // 1568056252
		{ &Z_Construct_UFunction_UScrollBox_SetAlwaysShowScrollbar, "SetAlwaysShowScrollbar" }, // 4163369747
		{ &Z_Construct_UFunction_UScrollBox_SetOrientation, "SetOrientation" }, // 1211842681
		{ &Z_Construct_UFunction_UScrollBox_SetScrollbarThickness, "SetScrollbarThickness" }, // 5559892
		{ &Z_Construct_UFunction_UScrollBox_SetScrollBarVisibility, "SetScrollBarVisibility" }, // 1343560154
		{ &Z_Construct_UFunction_UScrollBox_SetScrollOffset, "SetScrollOffset" }, // 962728480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/ScrollBox.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Called when the scroll has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUserScrolled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UScrollBox, OnUserScrolled), Z_Construct_UDelegateFunction_UMG_OnUserScrolledEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Option to disable right-click-drag scrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->bAllowRightClickDragScrolling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRightClickDragScrolling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The amount of padding to ensure exists between the item being navigated to, at the edge of the\nscrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding = { UE4CodeGen_Private::EPropertyClass::Float, "NavigationScrollPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, NavigationScrollPadding), METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationDestination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, NavigationDestination), Z_Construct_UEnum_Slate_EDescendantScrollDestination, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Disable to stop scrollbars from activating inertial overscrolling" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AllowOverscroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowOverscroll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit(void* Obj)
	{
		((UScrollBox*)Obj)->AlwaysShowScrollbar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar = { UE4CodeGen_Private::EPropertyClass::Bool, "AlwaysShowScrollbar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UScrollBox), &Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollbarThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ScrollbarThickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "When mouse wheel events should be consumed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel = { UE4CodeGen_Private::EPropertyClass::Enum, "ConsumeMouseWheel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ConsumeMouseWheel), Z_Construct_UEnum_SlateCore_EConsumeMouseWheel, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "Visibility" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility = { UE4CodeGen_Private::EPropertyClass::Enum, "ScrollBarVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, ScrollBarVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Scroll" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The orientation of the scrolling and stacking in the box." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UScrollBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle = { UE4CodeGen_Private::EPropertyClass::Object, "BarStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UScrollBox, BarStyle_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Object, "Style", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UScrollBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Bar Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The bar style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UScrollBox, WidgetBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBox.h" },
		{ "ToolTip", "The style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UScrollBox, WidgetStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_OnUserScrolled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_bAllowRightClickDragScrolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationScrollPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_NavigationDestination_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AllowOverscroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_AlwaysShowScrollbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollbarThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ConsumeMouseWheel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_ScrollBarVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_BarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetBarStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBox_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScrollBox_Statics::ClassParams = {
		&UScrollBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UScrollBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBox, 2709192337);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBox(Z_Construct_UClass_UScrollBox, &UScrollBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
