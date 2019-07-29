// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/WidgetBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetBinding_GetValue();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UWidgetBinding::StaticRegisterNativesUWidgetBinding()
	{
		UClass* Class = UWidgetBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UWidgetBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetBinding_GetValue_Statics
	{
		struct WidgetBinding_eventGetValue_Parms
		{
			UWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/WidgetBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBinding, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(WidgetBinding_eventGetValue_Parms), Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetBinding_NoRegister()
	{
		return UWidgetBinding::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetBinding_GetValue, "GetValue" }, // 3233498713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/WidgetBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/WidgetBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBinding_Statics::ClassParams = {
		&UWidgetBinding::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetBinding, 1113848372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetBinding(Z_Construct_UClass_UWidgetBinding, &UWidgetBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
