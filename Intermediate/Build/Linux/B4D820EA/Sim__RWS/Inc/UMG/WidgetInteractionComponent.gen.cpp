// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WidgetInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetInteractionComponent() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetInteractionSource();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressKey();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnHoveredWidgetChanged_Parms
		{
			UWidgetComponent* WidgetComponent;
			UWidgetComponent* PreviousWidgetComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PreviousWidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnHoveredWidgetChanged_Parms, PreviousWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnHoveredWidgetChanged_Parms, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "TODO Come up with a better way to let people forward a lot of keyboard input without a bunch of glue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnHoveredWidgetChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_UMG_eventOnHoveredWidgetChanged_Parms), Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EWidgetInteractionSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetInteractionSource, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetInteractionSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetInteractionSource(EWidgetInteractionSource_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetInteractionSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetInteractionSource_CRC() { return 1488883696U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetInteractionSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetInteractionSource"), 0, Get_Z_Construct_UEnum_UMG_EWidgetInteractionSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetInteractionSource::World", (int64)EWidgetInteractionSource::World },
				{ "EWidgetInteractionSource::Mouse", (int64)EWidgetInteractionSource::Mouse },
				{ "EWidgetInteractionSource::CenterScreen", (int64)EWidgetInteractionSource::CenterScreen },
				{ "EWidgetInteractionSource::Custom", (int64)EWidgetInteractionSource::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CenterScreen.ToolTip", "Sends trace from the center of the first local player's screen." },
				{ "Custom.ToolTip", "Sends traces from a custom location determined by the user.  Will use whatever\nFHitResult is set by the call to SetCustomHitResult." },
				{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
				{ "Mouse.ToolTip", "Sends traces from the mouse location of the first local player controller." },
				{ "ToolTip", "The interaction source for the widget interaction component, e.g. where do we try and\ntrace from to try to find a widget under a virtual pointer device." },
				{ "World.ToolTip", "Sends traces from the world location and orientation of the interaction component." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetInteractionSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetInteractionSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWidgetInteractionComponent::StaticRegisterNativesUWidgetInteractionComponent()
	{
		UClass* Class = UWidgetInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get2DHitLocation", &UWidgetInteractionComponent::execGet2DHitLocation },
			{ "GetHoveredWidgetComponent", &UWidgetInteractionComponent::execGetHoveredWidgetComponent },
			{ "GetLastHitResult", &UWidgetInteractionComponent::execGetLastHitResult },
			{ "IsOverFocusableWidget", &UWidgetInteractionComponent::execIsOverFocusableWidget },
			{ "IsOverHitTestVisibleWidget", &UWidgetInteractionComponent::execIsOverHitTestVisibleWidget },
			{ "IsOverInteractableWidget", &UWidgetInteractionComponent::execIsOverInteractableWidget },
			{ "PressAndReleaseKey", &UWidgetInteractionComponent::execPressAndReleaseKey },
			{ "PressKey", &UWidgetInteractionComponent::execPressKey },
			{ "PressPointerKey", &UWidgetInteractionComponent::execPressPointerKey },
			{ "ReleaseKey", &UWidgetInteractionComponent::execReleaseKey },
			{ "ReleasePointerKey", &UWidgetInteractionComponent::execReleasePointerKey },
			{ "ScrollWheel", &UWidgetInteractionComponent::execScrollWheel },
			{ "SendKeyChar", &UWidgetInteractionComponent::execSendKeyChar },
			{ "SetCustomHitResult", &UWidgetInteractionComponent::execSetCustomHitResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics
	{
		struct WidgetInteractionComponent_eventGet2DHitLocation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventGet2DHitLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Gets the last hit location on the widget in 2D, local pixel units of the render target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "Get2DHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(WidgetInteractionComponent_eventGet2DHitLocation_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics
	{
		struct WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms
		{
			UWidgetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Get the currently hovered widget component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "GetHoveredWidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics
	{
		struct WidgetInteractionComponent_eventGetLastHitResult_Parms
		{
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000582, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventGetLastHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Gets the last hit result generated by the component.  Returns the custom hit result if that was set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "GetLastHitResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetInteractionComponent_eventGetLastHitResult_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics
	{
		struct WidgetInteractionComponent_eventIsOverFocusableWidget_Parms
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
	void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventIsOverFocusableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventIsOverFocusableWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is focusable.  e.g. Slate widgets that\nreturn true for SupportsKeyboardFocus()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "IsOverFocusableWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetInteractionComponent_eventIsOverFocusableWidget_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics
	{
		struct WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms
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
	void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is has a visibility that makes it hit test\nvisible.  e.g. Slate widgets that return true for GetVisibility().IsHitTestVisible()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "IsOverHitTestVisibleWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics
	{
		struct WidgetInteractionComponent_eventIsOverInteractableWidget_Parms
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
	void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventIsOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventIsOverInteractableWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is interactive.  e.g. Slate widgets\nthat return true for IsInteractable()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "IsOverInteractableWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetInteractionComponent_eventIsOverInteractableWidget_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics
	{
		struct WidgetInteractionComponent_eventPressAndReleaseKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventPressAndReleaseKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventPressAndReleaseKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventPressAndReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Does both the press and release of a simulated keyboard key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "PressAndReleaseKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventPressAndReleaseKey_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics
	{
		struct WidgetInteractionComponent_eventPressKey_Parms
		{
			FKey Key;
			bool bRepeat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventPressKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventPressKey_Parms*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat = { UE4CodeGen_Private::EPropertyClass::Bool, "bRepeat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventPressKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Press a key as if it had come from the keyboard.  Avoid using this for 'a-z|A-Z', things like\nthe Editable Textbox in Slate expect OnKeyChar to be called to signal a specific character being\nsend to the widget.  So for those cases you should use SendKeyChar." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "PressKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventPressKey_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics
	{
		struct WidgetInteractionComponent_eventPressPointerKey_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventPressPointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Presses a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "PressPointerKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventPressPointerKey_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics
	{
		struct WidgetInteractionComponent_eventReleaseKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventReleaseKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventReleaseKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if it had been released by the keyboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "ReleaseKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventReleaseKey_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics
	{
		struct WidgetInteractionComponent_eventReleasePointerKey_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventReleasePointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "ReleasePointerKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventReleasePointerKey_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics
	{
		struct WidgetInteractionComponent_eventScrollWheel_Parms
		{
			float ScrollDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta = { UE4CodeGen_Private::EPropertyClass::Float, "ScrollDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventScrollWheel_Parms, ScrollDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Sends a scroll wheel event to the widget under the last hit result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "ScrollWheel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventScrollWheel_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics
	{
		struct WidgetInteractionComponent_eventSendKeyChar_Parms
		{
			FString Characters;
			bool bRepeat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((WidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat = { UE4CodeGen_Private::EPropertyClass::Bool, "bRepeat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters = { UE4CodeGen_Private::EPropertyClass::Str, "Characters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventSendKeyChar_Parms, Characters), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Transmits a list of characters to a widget by simulating a OnKeyChar event for each key listed in\nthe string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "SendKeyChar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetInteractionComponent_eventSendKeyChar_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics
	{
		struct WidgetInteractionComponent_eventSetCustomHitResult_Parms
		{
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(WidgetInteractionComponent_eventSetCustomHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, "SetCustomHitResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(WidgetInteractionComponent_eventSetCustomHitResult_Parms), Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister()
	{
		return UWidgetInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetHitTestVisible_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetHitTestVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetFocusable_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetInteractable_MetaData[];
#endif
		static void NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLocalHitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalHitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHitTesting_MetaData[];
#endif
		static void NewProp_bEnableHitTesting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHitTesting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredWidgetChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredWidgetChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation, "Get2DHitLocation" }, // 1905997409
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent, "GetHoveredWidgetComponent" }, // 3272332846
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult, "GetLastHitResult" }, // 1975216497
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget, "IsOverFocusableWidget" }, // 186416919
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget, "IsOverHitTestVisibleWidget" }, // 3141399302
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget, "IsOverInteractableWidget" }, // 696402169
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey, "PressAndReleaseKey" }, // 3269751275
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey, "PressKey" }, // 3023130913
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey, "PressPointerKey" }, // 946814413
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey, "ReleaseKey" }, // 926218899
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey, "ReleasePointerKey" }, // 315256240
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel, "ScrollWheel" }, // 2147070857
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar, "SendKeyChar" }, // 3492014556
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult, "SetCustomHitResult" }, // 883313121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UserInterface" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/WidgetInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is a component to allow interaction with the Widget Component.  This class allows you to\nsimulate a sort of laser pointer device, when it hovers over widgets it will send the basic signals\nto show as if the mouse were moving on top of it.  You'll then tell the component to simulate key presses,\nlike Left Mouse, down and up, to simulate a mouse click." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The arrow component we show at editor time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovered over a widget that is hit test visible?" },
	};
#endif
	void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj)
	{
		((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetHitTestVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHoveredWidgetHitTestVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any focusable widget?" },
	};
#endif
	void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj)
	{
		((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHoveredWidgetFocusable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any interactive widgets." },
	};
#endif
	void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj)
	{
		((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHoveredWidgetInteractable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The last hit result we used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "LastHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002000, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, LastHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The widget component we're currently hovering over." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HoveredWidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, HoveredWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The last 2D location on the widget component that was hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastLocalHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, LastLocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The 2D location on the widget component that was hit." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, LocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Stores the custom hit result set by the player." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomHitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002000, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, CustomHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Determines the color of the debug lines." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Shows some debugging lines and a hit sphere to help you debug interactions." },
	};
#endif
	void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((UWidgetInteractionComponent*)Obj)->bShowDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowDebug", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Should the interaction component perform hit testing (Automatic or Custom) and attempt to\nsimulate hover - if you were going to emulate a keyboard you would want to turn this option off\nif the virtual keyboard was separate from the virtual pointer device and used a second interaction\ncomponent." },
	};
#endif
	void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit(void* Obj)
	{
		((UWidgetInteractionComponent*)Obj)->bEnableHitTesting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableHitTesting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Should we project from the world location of the component?  If you set this to false, you'll\nneed to call SetCustomHitResult(), and provide the result of a custom hit test form whatever\nlocation you wish." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource = { UE4CodeGen_Private::EPropertyClass::Enum, "InteractionSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, InteractionSource), Z_Construct_UEnum_UMG_EWidgetInteractionSource, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The distance in game units the component should be able to interact with a widget component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "InteractionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The trace channel to use when tracing for widget components in the world." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Each user virtual controller or virtual finger tips being simulated should use a different pointer index." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex = { UE4CodeGen_Private::EPropertyClass::Float, "PointerIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, PointerIndex), METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Represents the Virtual User Index.  Each virtual user should be represented by a different\nindex number, this will maintain separate capture and focus states for them.  Each\ncontroller or finger-tip should get a unique PointerIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex = { UE4CodeGen_Private::EPropertyClass::Int, "VirtualUserIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, VirtualUserIndex), METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData[] = {
		{ "Category", "Interaction|Event" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Called when the hovered Widget Component changes.  The interaction component functions at the Slate\nlevel - so it's unable to report anything about what UWidget is under the hit result." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHoveredWidgetChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWidgetInteractionComponent, OnHoveredWidgetChanged), Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::ClassParams = {
		&UWidgetInteractionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetInteractionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetInteractionComponent, 2040506508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetInteractionComponent(Z_Construct_UClass_UWidgetInteractionComponent, &UWidgetInteractionComponent::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
