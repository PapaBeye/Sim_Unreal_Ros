// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/AssetExportTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetExportTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
// End Cross Module References
	void UAssetExportTask::StaticRegisterNativesUAssetExportTask()
	{
	}
	UClass* Z_Construct_UClass_UAssetExportTask_NoRegister()
	{
		return UAssetExportTask::StaticClass();
	}
	struct Z_Construct_UClass_UAssetExportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Errors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreObjectList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreObjectList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreObjectList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteEmptyFiles_MetaData[];
#endif
		static void NewProp_bWriteEmptyFiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteEmptyFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFileArchive_MetaData[];
#endif
		static void NewProp_bUseFileArchive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFileArchive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrompt_MetaData[];
#endif
		static void NewProp_bPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceIdentical_MetaData[];
#endif
		static void NewProp_bReplaceIdentical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceIdentical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Exporter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetExportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AssetExportTask.h" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of error messages encountered during exporter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors = { UE4CodeGen_Private::EPropertyClass::Array, "Errors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, Errors), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Errors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Exporter specific options" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Object, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, Options), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of objects to ignore exporting" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList = { UE4CodeGen_Private::EPropertyClass::Array, "IgnoreObjectList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, IgnoreObjectList), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "IgnoreObjectList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Write even if file empty" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bWriteEmptyFiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles = { UE4CodeGen_Private::EPropertyClass::Bool, "bWriteEmptyFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Save to a file archive" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bUseFileArchive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFileArchive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Unattended export" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bAutomated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Allow dialog prompts" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt = { UE4CodeGen_Private::EPropertyClass::Bool, "bPrompt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Replace identical files" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bReplaceIdentical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplaceIdentical", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Export selected only" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "File to export as" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, Filename), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Optional exporter, otherwise it will be determined automatically" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter = { UE4CodeGen_Private::EPropertyClass::Object, "Exporter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, Exporter), Z_Construct_UClass_UExporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Asset to export" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UAssetExportTask, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetExportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetExportTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetExportTask_Statics::ClassParams = {
		&UAssetExportTask::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UAssetExportTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetExportTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetExportTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetExportTask, 1439359289);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetExportTask(Z_Construct_UClass_UAssetExportTask, &UAssetExportTask::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetExportTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetExportTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
