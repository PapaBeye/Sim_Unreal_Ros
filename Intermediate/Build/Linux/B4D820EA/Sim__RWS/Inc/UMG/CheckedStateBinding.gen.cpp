// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/CheckedStateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckedStateBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UCheckedStateBinding_GetValue();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
// End Cross Module References
	void UCheckedStateBinding::StaticRegisterNativesUCheckedStateBinding()
	{
		UClass* Class = UCheckedStateBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UCheckedStateBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics
	{
		struct CheckedStateBinding_eventGetValue_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CheckedStateBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckedStateBinding, "GetValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(CheckedStateBinding_eventGetValue_Parms), Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckedStateBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister()
	{
		return UCheckedStateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UCheckedStateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckedStateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckedStateBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckedStateBinding_GetValue, "GetValue" }, // 1708697798
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/CheckedStateBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckedStateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckedStateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams = {
		&UCheckedStateBinding::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckedStateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckedStateBinding, 1834010863);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckedStateBinding(Z_Construct_UClass_UCheckedStateBinding, &UCheckedStateBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UCheckedStateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckedStateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
