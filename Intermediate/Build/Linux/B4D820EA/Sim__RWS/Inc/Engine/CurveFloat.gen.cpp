// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveFloat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFloat() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue();
// End Cross Module References
class UScriptStruct* FRuntimeFloatCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeFloatCurve, Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeFloatCurve"), sizeof(FRuntimeFloatCurve), Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeFloatCurve(FRuntimeFloatCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("RuntimeFloatCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeFloatCurve")),new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRuntimeFloatCurve;
	struct Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCurveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, ExternalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorCurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, EditorCurveData), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeFloatCurve",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FRuntimeFloatCurve),
		alignof(FRuntimeFloatCurve),
		Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeFloatCurve"), sizeof(FRuntimeFloatCurve), Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeFloatCurve_CRC() { return 2150528652U; }
	void UCurveFloat::StaticRegisterNativesUCurveFloat()
	{
		UClass* Class = UCurveFloat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatValue", &UCurveFloat::execGetFloatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics
	{
		struct CurveFloat_eventGetFloatValue_Parms
		{
			float InTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime = { UE4CodeGen_Private::EPropertyClass::Float, "InTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveFloat, "GetFloatValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CurveFloat_eventGetFloatValue_Parms), Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveFloat_NoRegister()
	{
		return UCurveFloat::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEventCurve_MetaData[];
#endif
		static void NewProp_bIsEventCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEventCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveFloat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveFloat_GetFloatValue, "GetFloatValue" }, // 1383599200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Curves/CurveFloat.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Flag to represent event curve" },
	};
#endif
	void Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit(void* Obj)
	{
		((UCurveFloat*)Obj)->bIsEventCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEventCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCurveFloat), &Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Keyframe data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCurveFloat, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveFloat_Statics::ClassParams = {
		&UCurveFloat::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCurveFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveFloat, 2016547259);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveFloat(Z_Construct_UClass_UCurveFloat, &UCurveFloat::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
