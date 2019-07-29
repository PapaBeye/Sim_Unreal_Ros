// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetBlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClass() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EBindingKind();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateRuntimeBinding();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
// End Cross Module References
	static UEnum* EBindingKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EBindingKind, Z_Construct_UPackage__Script_UMG(), TEXT("EBindingKind"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBindingKind(EBindingKind_StaticEnum, TEXT("/Script/UMG"), TEXT("EBindingKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EBindingKind_CRC() { return 2601297414U; }
	UEnum* Z_Construct_UEnum_UMG_EBindingKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBindingKind"), 0, Get_Z_Construct_UEnum_UMG_EBindingKind_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBindingKind::Function", (int64)EBindingKind::Function },
				{ "EBindingKind::Property", (int64)EBindingKind::Property },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBindingKind",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBindingKind",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDelegateRuntimeBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FDelegateRuntimeBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateRuntimeBinding, Z_Construct_UPackage__Script_UMG(), TEXT("DelegateRuntimeBinding"), sizeof(FDelegateRuntimeBinding), Get_Z_Construct_UScriptStruct_FDelegateRuntimeBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateRuntimeBinding(FDelegateRuntimeBinding::StaticStruct, TEXT("/Script/UMG"), TEXT("DelegateRuntimeBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFDelegateRuntimeBinding
{
	FScriptStruct_UMG_StaticRegisterNativesFDelegateRuntimeBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateRuntimeBinding")),new UScriptStruct::TCppStructOps<FDelegateRuntimeBinding>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFDelegateRuntimeBinding;
	struct Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateRuntimeBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The kind of binding we're performing, are we binding to a property or a function." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind = { UE4CodeGen_Private::EPropertyClass::Enum, "Kind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, Kind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The function or property we're binding to on the source object." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The property on the widget that will have a binding placed on it." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The widget that will be bound to the live data." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"DelegateRuntimeBinding",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDelegateRuntimeBinding),
		alignof(FDelegateRuntimeBinding),
		Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateRuntimeBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateRuntimeBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateRuntimeBinding"), sizeof(FDelegateRuntimeBinding), Get_Z_Construct_UScriptStruct_FDelegateRuntimeBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateRuntimeBinding_CRC() { return 2807149016U; }
	void UWidgetBlueprintGeneratedClass::StaticRegisterNativesUWidgetBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister()
	{
		return UWidgetBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorTemplate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TemplateAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedSlots;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NamedSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClassRequiresNativeTick_MetaData[];
#endif
		static void NewProp_bClassRequiresNativeTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClassRequiresNativeTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookedTemplate_MetaData[];
#endif
		static void NewProp_bCookedTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookedTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemplateInitialized_MetaData[];
#endif
		static void NewProp_bTemplateInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemplateInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidTemplate_MetaData[];
#endif
		static void NewProp_bValidTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDynamicCreation_MetaData[];
#endif
		static void NewProp_bAllowDynamicCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDynamicCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTemplate_MetaData[];
#endif
		static void NewProp_bAllowTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTemplate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookSlowConstructionWidgetTree_MetaData[];
#endif
		static void NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookSlowConstructionWidgetTree;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "The widget blueprint generated class allows us to create blueprint-able widgets for UMG at runtime.\nAll WBPGC's are of UUserWidget classes, and they perform special post initialization using this class\nto give themselves many of the same capabilities as AActor blueprints, like dynamic delegate binding for\nwidgets." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_EditorTemplate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_EditorTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "EditorTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800082008, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, EditorTemplate), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_EditorTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_EditorTemplate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Template_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Template = { UE4CodeGen_Private::EPropertyClass::Object, "Template", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000082008, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Template), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Template_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_TemplateAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_TemplateAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "TemplateAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000080008, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, TemplateAsset), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_TemplateAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_TemplateAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots = { UE4CodeGen_Private::EPropertyClass::Array, "NamedSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, NamedSlots), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "NamedSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations = { UE4CodeGen_Private::EPropertyClass::Array, "Animations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Animations), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Animations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings = { UE4CodeGen_Private::EPropertyClass::Array, "Bindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Bindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Bindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDelegateRuntimeBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The classes native parent requires a native tick" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bClassRequiresNativeTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bClassRequiresNativeTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bCookedTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookedTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bTemplateInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized = { UE4CodeGen_Private::EPropertyClass::Bool, "bTemplateInitialized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bValidTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate = { UE4CodeGen_Private::EPropertyClass::Bool, "bValidTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bAllowDynamicCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDynamicCreation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bAllowTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bCookSlowConstructionWidgetTree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookSlowConstructionWidgetTree", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "A tree of the widget templates to be created" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetTree", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_EditorTemplate,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_TemplateAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookedTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bTemplateInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bValidTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowDynamicCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bAllowTemplate,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCookSlowConstructionWidgetTree,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::ClassParams = {
		&UWidgetBlueprintGeneratedClass::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetBlueprintGeneratedClass, 1026779394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetBlueprintGeneratedClass(Z_Construct_UClass_UWidgetBlueprintGeneratedClass, &UWidgetBlueprintGeneratedClass::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintGeneratedClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprintGeneratedClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
