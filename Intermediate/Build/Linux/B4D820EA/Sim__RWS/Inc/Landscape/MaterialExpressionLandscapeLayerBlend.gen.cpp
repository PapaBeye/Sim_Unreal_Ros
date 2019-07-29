// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Materials/MaterialExpressionLandscapeLayerBlend.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerBlend() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* ELandscapeLayerBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerBlendType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLayerBlendType(ELandscapeLayerBlendType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLayerBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_CRC() { return 3560670948U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLayerBlendType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LB_WeightBlend", (int64)LB_WeightBlend },
				{ "LB_AlphaBlend", (int64)LB_AlphaBlend },
				{ "LB_HeightBlend", (int64)LB_HeightBlend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeLayerBlendType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELandscapeLayerBlendType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLayerBlendInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerBlendInput, Z_Construct_UPackage__Script_Landscape(), TEXT("LayerBlendInput"), sizeof(FLayerBlendInput), Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayerBlendInput(FLayerBlendInput::StaticStruct, TEXT("/Script/Landscape"), TEXT("LayerBlendInput"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLayerBlendInput
{
	FScriptStruct_Landscape_StaticRegisterNativesFLayerBlendInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LayerBlendInput")),new UScriptStruct::TCppStructOps<FLayerBlendInput>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLayerBlendInput;
	struct Z_Construct_UScriptStruct_FLayerBlendInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstHeightInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstHeightInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstLayerInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstLayerInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerBlendInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if HeightInput is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput = { UE4CodeGen_Private::EPropertyClass::Float, "ConstHeightInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, ConstHeightInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if LayerInput is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstLayerInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, ConstLayerInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PreviewWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, PreviewWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstHeightInput' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput = { UE4CodeGen_Private::EPropertyClass::Struct, "HeightInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, HeightInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstLayerInput' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, LayerInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, BlendType), Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLayerBlendInput, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LayerBlendInput",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLayerBlendInput),
		alignof(FLayerBlendInput),
		Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayerBlendInput"), sizeof(FLayerBlendInput), Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLayerBlendInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC() { return 821318585U; }
	void UMaterialExpressionLandscapeLayerBlend::StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerBlend::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerBlend, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers = { UE4CodeGen_Private::EPropertyClass::Array, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerBlend, Layers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLayerBlendInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerBlend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerBlend::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001020A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerBlend, 2139048264);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerBlend(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend, &UMaterialExpressionLandscapeLayerBlend::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerBlend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerBlend);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerBlend)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
