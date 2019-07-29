// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/InputScaleBias.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputScaleBias() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
// End Cross Module References
	static UEnum* EAnimAlphaInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAlphaInputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimAlphaInputType(EAnimAlphaInputType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimAlphaInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimAlphaInputType_CRC() { return 515194215U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimAlphaInputType"), 0, Get_Z_Construct_UEnum_Engine_EAnimAlphaInputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimAlphaInputType::Float", (int64)EAnimAlphaInputType::Float },
				{ "EAnimAlphaInputType::Bool", (int64)EAnimAlphaInputType::Bool },
				{ "EAnimAlphaInputType::Curve", (int64)EAnimAlphaInputType::Curve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bool.DisplayName", "Bool Value" },
				{ "Curve.DisplayName", "Anim Curve Value" },
				{ "Float.DisplayName", "Float Value" },
				{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
				{ "ToolTip", "AnimNodes using an Alpha can choose how it is driven." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimAlphaInputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAnimAlphaInputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInputAlphaBoolBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAlphaBoolBlend, Z_Construct_UPackage__Script_Engine(), TEXT("InputAlphaBoolBlend"), sizeof(FInputAlphaBoolBlend), Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAlphaBoolBlend(FInputAlphaBoolBlend::StaticStruct, TEXT("/Script/Engine"), TEXT("InputAlphaBoolBlend"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend
{
	FScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAlphaBoolBlend")),new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputAlphaBoolBlend;
	struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, AlphaBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FInputAlphaBoolBlend*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInputAlphaBoolBlend), &Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendOption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAlphaBoolBlend",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FInputAlphaBoolBlend),
		alignof(FInputAlphaBoolBlend),
		Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAlphaBoolBlend"), sizeof(FInputAlphaBoolBlend), Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAlphaBoolBlend_CRC() { return 560092081U; }
class UScriptStruct* FInputScaleBiasClamp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClamp, Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClamp"), sizeof(FInputScaleBiasClamp), Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputScaleBiasClamp(FInputScaleBiasClamp::StaticStruct, TEXT("/Script/Engine"), TEXT("InputScaleBiasClamp"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp
{
	FScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputScaleBiasClamp")),new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp;
	struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolatedResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolatedResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpolatedResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpolatedResult = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolatedResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InterpolatedResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpolatedResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpolatedResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing = { UE4CodeGen_Private::EPropertyClass::Float, "InterpSpeedDecreasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing = { UE4CodeGen_Private::EPropertyClass::Float, "InterpSpeedIncreasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax = { UE4CodeGen_Private::EPropertyClass::Float, "ClampMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin = { UE4CodeGen_Private::EPropertyClass::Float, "ClampMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias = { UE4CodeGen_Private::EPropertyClass::Float, "Bias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange = { UE4CodeGen_Private::EPropertyClass::Struct, "InRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bInterpResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterpResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bClampResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult = { UE4CodeGen_Private::EPropertyClass::Bool, "bClampResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bMapRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bMapRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpolatedResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBiasClamp",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FInputScaleBiasClamp),
		alignof(FInputScaleBiasClamp),
		Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputScaleBiasClamp"), sizeof(FInputScaleBiasClamp), Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputScaleBiasClamp_CRC() { return 1922043366U; }
class UScriptStruct* FInputRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputRange_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRange, Z_Construct_UPackage__Script_Engine(), TEXT("InputRange"), sizeof(FInputRange), Get_Z_Construct_UScriptStruct_FInputRange_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputRange(FInputRange::StaticStruct, TEXT("/Script/Engine"), TEXT("InputRange"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputRange
{
	FScriptStruct_Engine_StaticRegisterNativesFInputRange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputRange")),new UScriptStruct::TCppStructOps<FInputRange>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputRange;
	struct Z_Construct_UScriptStruct_FInputRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputRange",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FInputRange),
		alignof(FInputRange),
		Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputRange_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputRange"), sizeof(FInputRange), Get_Z_Construct_UScriptStruct_FInputRange_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputRange_CRC() { return 3611103225U; }
class UScriptStruct* FInputScaleBias::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias, Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputScaleBias(FInputScaleBias::StaticStruct, TEXT("/Script/Engine"), TEXT("InputScaleBias"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias
{
	FScriptStruct_Engine_StaticRegisterNativesFInputScaleBias()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputScaleBias")),new UScriptStruct::TCppStructOps<FInputScaleBias>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputScaleBias;
	struct Z_Construct_UScriptStruct_FInputScaleBias_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input scaling struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBias>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias = { UE4CodeGen_Private::EPropertyClass::Float, "Bias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBias, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInputScaleBias, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBias",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FInputScaleBias),
		alignof(FInputScaleBias),
		Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputScaleBias"), sizeof(FInputScaleBias), Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC() { return 2201223439U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
