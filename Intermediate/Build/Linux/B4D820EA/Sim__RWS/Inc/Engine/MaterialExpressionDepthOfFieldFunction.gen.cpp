// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDepthOfFieldFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthOfFieldFunction() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EDepthOfFieldFunctionValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldFunctionValue"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthOfFieldFunctionValue(EDepthOfFieldFunctionValue_StaticEnum, TEXT("/Script/Engine"), TEXT("EDepthOfFieldFunctionValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_CRC() { return 742882417U; }
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthOfFieldFunctionValue"), 0, Get_Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TDOF_NearAndFarMask", (int64)TDOF_NearAndFarMask },
				{ "TDOF_NearMask", (int64)TDOF_NearMask },
				{ "TDOF_FarMask", (int64)TDOF_FarMask },
				{ "TDOF_CircleOfConfusionRadius", (int64)TDOF_CircleOfConfusionRadius },
				{ "TDOF_MAX", (int64)TDOF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
				{ "TDOF_CircleOfConfusionRadius.ToolTip", "in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus" },
				{ "TDOF_FarMask.ToolTip", "0:in Focus or Near .. 1:Far." },
				{ "TDOF_NearAndFarMask.ToolTip", "0:in Focus .. 1:Near or Far." },
				{ "TDOF_NearMask.ToolTip", "0:in Focus or Far .. 1:Near." },
				{ "ToolTip", "Note: The index is used to map the enum to different code in the shader" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDepthOfFieldFunctionValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDepthOfFieldFunctionValue",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionDepthOfFieldFunction::StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister()
	{
		return UMaterialExpressionDepthOfFieldFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FunctionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "usually nothing or PixelDepth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth = { UE4CodeGen_Private::EPropertyClass::Struct, "Depth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, Depth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData[] = {
		{ "Category", "MaterialExpressionDepthOfFieldFunction" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue = { UE4CodeGen_Private::EPropertyClass::Byte, "FunctionValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, FunctionValue), Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthOfFieldFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams = {
		&UMaterialExpressionDepthOfFieldFunction::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDepthOfFieldFunction, 1824502768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDepthOfFieldFunction(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction, &UMaterialExpressionDepthOfFieldFunction::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDepthOfFieldFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthOfFieldFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
