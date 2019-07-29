// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Exporters/Exporter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTask();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTasks();
	ENGINE_API UFunction* Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_UExporter_ScriptRunAssetExportTask = FName(TEXT("ScriptRunAssetExportTask"));
	bool UExporter::ScriptRunAssetExportTask(UAssetExportTask* Task)
	{
		Exporter_eventScriptRunAssetExportTask_Parms Parms;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UExporter_ScriptRunAssetExportTask),&Parms);
		return !!Parms.ReturnValue;
	}
	void UExporter::StaticRegisterNativesUExporter()
	{
		UClass* Class = UExporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAssetExportTask", &UExporter::execRunAssetExportTask },
			{ "RunAssetExportTasks", &UExporter::execRunAssetExportTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics
	{
		struct Exporter_eventRunAssetExportTask_Parms
		{
			UAssetExportTask* Task;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Exporter_eventRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task = { UE4CodeGen_Private::EPropertyClass::Object, "Task", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Exporter_eventRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param        Task            The task to export.\n\n@return       true if the the object was successfully exported" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, "RunAssetExportTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(Exporter_eventRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics
	{
		struct Exporter_eventRunAssetExportTasks_Parms
		{
			TArray<UAssetExportTask*> ExportTasks;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExportTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportTasks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTasks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Exporter_eventRunAssetExportTasks_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks = { UE4CodeGen_Private::EPropertyClass::Array, "ExportTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Exporter_eventRunAssetExportTasks_Parms, ExportTasks), METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ExportTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param       ExportTasks             The array of tasks to export.\n\n@return      true if all tasks ran without error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, "RunAssetExportTasks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(Exporter_eventRunAssetExportTasks_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventScriptRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Exporter_eventScriptRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task = { UE4CodeGen_Private::EPropertyClass::Object, "Task", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Exporter_eventScriptRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Overridden by script based exporters.\n\n@param        Task            The task to export.\n\n@return       true if overridden by script exporter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, "ScriptRunAssetExportTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Exporter_eventScriptRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExporter_NoRegister()
	{
		return UExporter::StaticClass();
	}
	struct Z_Construct_UClass_UExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFileOperations_MetaData[];
#endif
		static void NewProp_bForceFileOperations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFileOperations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectedOnly_MetaData[];
#endif
		static void NewProp_bSelectedOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectedOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[];
#endif
		static void NewProp_bText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextIndent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextIndent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredFormatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredFormatIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatDescription;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatDescription_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatExtension;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatExtension_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportRootScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportRootScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTask, "RunAssetExportTask" }, // 1715398319
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTasks, "RunAssetExportTasks" }, // 1481514536
		{ &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask, "ScriptRunAssetExportTask" }, // 2336817060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/Exporter.h" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask = { UE4CodeGen_Private::EPropertyClass::Object, "ExportTask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UExporter, ExportTask), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bForceFileOperations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFileOperations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export only the selected objects" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bSelectedOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelectedOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export the data as text" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bText = { UE4CodeGen_Private::EPropertyClass::Bool, "bText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Current indentation of spaces of the exported text" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent = { UE4CodeGen_Private::EPropertyClass::Int, "TextIndent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, TextIndent), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Index into FormatExtension/FormatDescription of the preferred export format." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PreferredFormatIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UExporter, PreferredFormatIndex), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Descriptiong of the export format" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription = { UE4CodeGen_Private::EPropertyClass::Array, "FormatDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UExporter, FormatDescription), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FormatDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "File extension to use for this exporter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension = { UE4CodeGen_Private::EPropertyClass::Array, "FormatExtension", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UExporter, FormatExtension), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FormatExtension", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\nObjects being exported that are contained within ExportRootScope will use just their name instead of a full path" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope = { UE4CodeGen_Private::EPropertyClass::Object, "ExportRootScope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UExporter, ExportRootScope), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Supported class of this exporter" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass = { UE4CodeGen_Private::EPropertyClass::Class, "SupportedClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000004, 1, nullptr, STRUCT_OFFSET(UExporter, SupportedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExporter_Statics::ClassParams = {
		&UExporter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A9u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UExporter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExporter, 1868371765);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExporter(Z_Construct_UClass_UExporter, &UExporter::StaticClass, TEXT("/Script/Engine"), TEXT("UExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExporter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
