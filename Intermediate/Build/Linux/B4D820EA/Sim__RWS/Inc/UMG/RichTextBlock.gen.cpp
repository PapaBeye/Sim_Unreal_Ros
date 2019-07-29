// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlock() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UFunction* Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UFunction* Z_Construct_UFunction_URichTextBlock_SetText();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FRichTextStyleRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextStyleRow, Z_Construct_UPackage__Script_UMG(), TEXT("RichTextStyleRow"), sizeof(FRichTextStyleRow), Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichTextStyleRow(FRichTextStyleRow::StaticStruct, TEXT("/Script/UMG"), TEXT("RichTextStyleRow"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow
{
	FScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichTextStyleRow")),new UScriptStruct::TCppStructOps<FRichTextStyleRow>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFRichTextStyleRow;
	struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Simple struct for rich text styles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextStyleRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRichTextStyleRow, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextStyleRow",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRichTextStyleRow),
		alignof(FRichTextStyleRow),
		Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichTextStyleRow"), sizeof(FRichTextStyleRow), Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC() { return 3862434723U; }
	void URichTextBlock::StaticRegisterNativesURichTextBlock()
	{
		UClass* Class = URichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecoratorByClass", &URichTextBlock::execGetDecoratorByClass },
			{ "SetText", &URichTextBlock::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics
	{
		struct RichTextBlock_eventGetDecoratorByClass_Parms
		{
			TSubclassOf<URichTextBlockDecorator>  DecoratorClass;
			URichTextBlockDecorator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecoratorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, ReturnValue), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass = { UE4CodeGen_Private::EPropertyClass::Class, "DecoratorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, DecoratorClass), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, "GetDecoratorByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RichTextBlock_eventGetDecoratorByClass_Parms), Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetText_Statics
	{
		struct RichTextBlock_eventSetText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RichTextBlock_eventSetText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, "SetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(RichTextBlock_eventSetText_Parms), Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URichTextBlock_NoRegister()
	{
		return URichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceDecorators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceDecorators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceDecorators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecoratorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecoratorClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecoratorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStyleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextStyleSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass, "GetDecoratorByClass" }, // 640199059
		{ &Z_Construct_UFunction_URichTextBlock_SetText, "SetText" }, // 120060968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/RichTextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The rich text block\n\n* Fancy Text\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceDecorators", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(URichTextBlock, InstanceDecorators), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InstanceDecorators", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses = { UE4CodeGen_Private::EPropertyClass::Array, "DecoratorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(URichTextBlock, DecoratorClasses), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "DecoratorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "RowType", "RichTextStyleRow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet = { UE4CodeGen_Private::EPropertyClass::Object, "TextStyleSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(URichTextBlock, TextStyleSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(URichTextBlock, Text), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlock_Statics::ClassParams = {
		&URichTextBlock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_URichTextBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlock, 3622959752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlock(Z_Construct_UClass_URichTextBlock, &URichTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
