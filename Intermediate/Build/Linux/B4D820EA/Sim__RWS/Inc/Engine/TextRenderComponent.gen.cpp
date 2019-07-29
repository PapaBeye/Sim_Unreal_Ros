// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/TextRenderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_K2_SetText();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetFont();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetText();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetWorldSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetXScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UTextRenderComponent_SetYScale();
// End Cross Module References
	static UEnum* EVerticalTextAligment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVerticalTextAligment, Z_Construct_UPackage__Script_Engine(), TEXT("EVerticalTextAligment"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVerticalTextAligment(EVerticalTextAligment_StaticEnum, TEXT("/Script/Engine"), TEXT("EVerticalTextAligment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVerticalTextAligment_CRC() { return 2993859670U; }
	UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVerticalTextAligment"), 0, Get_Z_Construct_UEnum_Engine_EVerticalTextAligment_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRTA_TextTop", (int64)EVRTA_TextTop },
				{ "EVRTA_TextCenter", (int64)EVRTA_TextCenter },
				{ "EVRTA_TextBottom", (int64)EVRTA_TextBottom },
				{ "EVRTA_QuadTop", (int64)EVRTA_QuadTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EVRTA_QuadTop.DisplayName", "Quad Top" },
				{ "EVRTA_TextBottom.DisplayName", "Text Bottom" },
				{ "EVRTA_TextCenter.DisplayName", "Text Center" },
				{ "EVRTA_TextTop.DisplayName", "Text Top" },
				{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVerticalTextAligment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVerticalTextAligment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHorizTextAligment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHorizTextAligment, Z_Construct_UPackage__Script_Engine(), TEXT("EHorizTextAligment"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizTextAligment(EHorizTextAligment_StaticEnum, TEXT("/Script/Engine"), TEXT("EHorizTextAligment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EHorizTextAligment_CRC() { return 2051321655U; }
	UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizTextAligment"), 0, Get_Z_Construct_UEnum_Engine_EHorizTextAligment_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHTA_Left", (int64)EHTA_Left },
				{ "EHTA_Center", (int64)EHTA_Center },
				{ "EHTA_Right", (int64)EHTA_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EHTA_Center.DisplayName", "Center" },
				{ "EHTA_Left.DisplayName", "Left" },
				{ "EHTA_Right.DisplayName", "Right" },
				{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHorizTextAligment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHorizTextAligment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTextRenderComponent::StaticRegisterNativesUTextRenderComponent()
	{
		UClass* Class = UTextRenderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextLocalSize", &UTextRenderComponent::execGetTextLocalSize },
			{ "GetTextWorldSize", &UTextRenderComponent::execGetTextWorldSize },
			{ "K2_SetText", &UTextRenderComponent::execK2_SetText },
			{ "SetFont", &UTextRenderComponent::execSetFont },
			{ "SetHorizontalAlignment", &UTextRenderComponent::execSetHorizontalAlignment },
			{ "SetHorizSpacingAdjust", &UTextRenderComponent::execSetHorizSpacingAdjust },
			{ "SetText", &UTextRenderComponent::execSetText },
			{ "SetTextMaterial", &UTextRenderComponent::execSetTextMaterial },
			{ "SetTextRenderColor", &UTextRenderComponent::execSetTextRenderColor },
			{ "SetVerticalAlignment", &UTextRenderComponent::execSetVerticalAlignment },
			{ "SetVertSpacingAdjust", &UTextRenderComponent::execSetVertSpacingAdjust },
			{ "SetWorldSize", &UTextRenderComponent::execSetWorldSize },
			{ "SetXScale", &UTextRenderComponent::execSetXScale },
			{ "SetYScale", &UTextRenderComponent::execSetYScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics
	{
		struct TextRenderComponent_eventGetTextLocalSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventGetTextLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get local size of text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "GetTextLocalSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(TextRenderComponent_eventGetTextLocalSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics
	{
		struct TextRenderComponent_eventGetTextWorldSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventGetTextWorldSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get world space size of text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "GetTextWorldSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(TextRenderComponent_eventGetTextWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics
	{
		struct TextRenderComponent_eventK2_SetText_Parms
		{
			FText Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Text, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventK2_SetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "DisplayName", "Set Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptName", "SetText" },
		{ "ToolTip", "Change the text value and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "K2_SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(TextRenderComponent_eventK2_SetText_Parms), Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_K2_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics
	{
		struct TextRenderComponent_eventSetFont_Parms
		{
			UFont* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetFont_Parms, Value), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the font and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetFont", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetFont_Parms), Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics
	{
		struct TextRenderComponent_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizTextAligment> Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetHorizontalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the horizontal alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetHorizSpacingAdjust_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetHorizSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text horizontal spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetHorizSpacingAdjust", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetHorizSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetText_Statics
	{
		struct TextRenderComponent_eventSetText_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the SetText function taking an FText instead." },
		{ "DisplayName", "Set Text (String)" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetText_Parms), Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics
	{
		struct TextRenderComponent_eventSetTextMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetTextMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text material and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetTextMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetTextMaterial_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics
	{
		struct TextRenderComponent_eventSetTextRenderColor_Parms
		{
			FColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetTextRenderColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text render color and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetTextRenderColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TextRenderComponent_eventSetTextRenderColor_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics
	{
		struct TextRenderComponent_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalTextAligment> Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetVerticalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the vertical alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetVertSpacingAdjust_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetVertSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text vertical spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetVertSpacingAdjust", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetVertSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics
	{
		struct TextRenderComponent_eventSetWorldSize_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetWorldSize_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the world size of the text and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetWorldSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics
	{
		struct TextRenderComponent_eventSetXScale_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetXScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text X scale and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetXScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetXScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetXScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics
	{
		struct TextRenderComponent_eventSetYScale_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetYScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text Y scale and signal the primitives to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, "SetYScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TextRenderComponent_eventSetYScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetYScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister()
	{
		return UTextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRenderAsText_MetaData[];
#endif
		static void NewProp_bAlwaysRenderAsText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRenderAsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertSpacingAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertSpacingAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizSpacingAdjust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizSpacingAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvDefaultSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvDefaultSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextRenderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextRenderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize, "GetTextLocalSize" }, // 254935093
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize, "GetTextWorldSize" }, // 337322413
		{ &Z_Construct_UFunction_UTextRenderComponent_K2_SetText, "K2_SetText" }, // 2492442852
		{ &Z_Construct_UFunction_UTextRenderComponent_SetFont, "SetFont" }, // 2442233924
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 4254536676
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust, "SetHorizSpacingAdjust" }, // 661021893
		{ &Z_Construct_UFunction_UTextRenderComponent_SetText, "SetText" }, // 18509676
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial, "SetTextMaterial" }, // 1963793219
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor, "SetTextRenderColor" }, // 3376173455
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 958284077
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust, "SetVertSpacingAdjust" }, // 1361734917
		{ &Z_Construct_UFunction_UTextRenderComponent_SetWorldSize, "SetWorldSize" }, // 1317341845
		{ &Z_Construct_UFunction_UTextRenderComponent_SetXScale, "SetXScale" }, // 1460369013
		{ &Z_Construct_UFunction_UTextRenderComponent_SetYScale, "SetYScale" }, // 4132280552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility Trigger" },
		{ "IncludePath", "Components/TextRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Allows text to draw unmodified when using debug visualization modes. *" },
	};
#endif
	void Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit(void* Obj)
	{
		((UTextRenderComponent*)Obj)->bAlwaysRenderAsText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysRenderAsText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextRenderComponent), &Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical adjustment per character, default is 0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "VertSpacingAdjust", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, VertSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal adjustment per character, default is 0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "HorizSpacingAdjust", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, HorizSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "The inverse of the Font's character height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize = { UE4CodeGen_Private::EPropertyClass::Float, "InvDefaultSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, InvDefaultSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize = { UE4CodeGen_Private::EPropertyClass::Float, "WorldSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, WorldSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical scale, default is 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale = { UE4CodeGen_Private::EPropertyClass::Float, "YScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, YScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal scale, default is 1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale = { UE4CodeGen_Private::EPropertyClass::Float, "XScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, XScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Color of the text, can be accessed as vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextRenderColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, TextRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Vertical Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, VerticalAlignment), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Horizontal Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, HorizontalAlignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Object, "Font", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "TextMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text content, can be multi line using <br> as line separator" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextRenderComponent, Text), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams = {
		&UTextRenderComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextRenderComponent, 3929151752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextRenderComponent(Z_Construct_UClass_UTextRenderComponent, &UTextRenderComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UTextRenderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
