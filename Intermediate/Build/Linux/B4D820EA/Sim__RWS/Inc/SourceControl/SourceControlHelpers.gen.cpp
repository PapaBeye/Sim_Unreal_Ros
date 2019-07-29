// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceControl/Public/SourceControlHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlHelpers() {}
// Cross Module References
	SOURCECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSourceControlState();
	UPackage* Z_Construct_UPackage__Script_SourceControl();
	SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister();
	SOURCECONTROL_API UClass* Z_Construct_UClass_USourceControlHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFiles();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CopyFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_CurrentProvider();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_IsAvailable();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_IsEnabled();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_QueryFileState();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFiles();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile();
	SOURCECONTROL_API UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles();
// End Cross Module References
class UScriptStruct* FSourceControlState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOURCECONTROL_API uint32 Get_Z_Construct_UScriptStruct_FSourceControlState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceControlState, Z_Construct_UPackage__Script_SourceControl(), TEXT("SourceControlState"), sizeof(FSourceControlState), Get_Z_Construct_UScriptStruct_FSourceControlState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceControlState(FSourceControlState::StaticStruct, TEXT("/Script/SourceControl"), TEXT("SourceControlState"), false, nullptr, nullptr);
static struct FScriptStruct_SourceControl_StaticRegisterNativesFSourceControlState
{
	FScriptStruct_SourceControl_StaticRegisterNativesFSourceControlState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceControlState")),new UScriptStruct::TCppStructOps<FSourceControlState>);
	}
} ScriptStruct_SourceControl_StaticRegisterNativesFSourceControlState;
	struct Z_Construct_UScriptStruct_FSourceControlState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedOutOther_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheckedOutOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckedOutOther_MetaData[];
#endif
		static void NewProp_bIsCheckedOutOther_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckedOutOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRevert_MetaData[];
#endif
		static void NewProp_bCanRevert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRevert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConflicted_MetaData[];
#endif
		static void NewProp_bIsConflicted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConflicted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAdd_MetaData[];
#endif
		static void NewProp_bCanAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsModified_MetaData[];
#endif
		static void NewProp_bIsModified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDelete_MetaData[];
#endif
		static void NewProp_bCanDelete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEdit_MetaData[];
#endif
		static void NewProp_bCanEdit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEdit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIgnored_MetaData[];
#endif
		static void NewProp_bIsIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIgnored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDeleted_MetaData[];
#endif
		static void NewProp_bIsDeleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdded_MetaData[];
#endif
		static void NewProp_bIsAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSourceControlled_MetaData[];
#endif
		static void NewProp_bIsSourceControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSourceControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCurrent_MetaData[];
#endif
		static void NewProp_bIsCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckedOut_MetaData[];
#endif
		static void NewProp_bIsCheckedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCheckOut_MetaData[];
#endif
		static void NewProp_bCanCheckOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCheckOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCheckIn_MetaData[];
#endif
		static void NewProp_bCanCheckIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCheckIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnknown_MetaData[];
#endif
		static void NewProp_bIsUnknown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnknown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Snapshot of source control state of for a file\n@see        USourceControlHelpers::QueryFileState()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceControlState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceControlState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get name of other user who this file already checked out or \"\" if no other user has it checked out" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther = { UE4CodeGen_Private::EPropertyClass::Str, "CheckedOutOther", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSourceControlState, CheckedOutOther), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is checked out by someone else" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsCheckedOutOther = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCheckedOutOther", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be reverted, i.e. discard changes and the file will no longer be checked-out." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanRevert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanRevert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is in a conflicted state" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsConflicted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsConflicted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be added to source control (i.e. is part of the directory\nstructure currently under source control)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is modified compared to the version in source control." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsModified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsModified", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if source control allows this file to be deleted." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanDelete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanDelete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if source control allows this file to be edited" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanEdit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEdit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is ignored by source control" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsIgnored", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is marked for delete" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsDeleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDeleted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is marked for add\n@note        if already checked in then not considered mid add" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is under source control" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsSourceControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSourceControlled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is up-to-date with the version in source control" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCurrent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file is checked out" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsCheckedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCheckedOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be checked out" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanCheckOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanCheckOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if this file can be checked in." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bCanCheckIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanCheckIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if we know anything about the source control state of this file" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsUnknown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUnknown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Indicates whether this source control state has valid information (true) or not (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FSourceControlState*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSourceControlState), &Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get the local filename that this state represents" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSourceControlState, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_CheckedOutOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOutOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanRevert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsConflicted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsIgnored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsSourceControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsCheckedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bCanCheckIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsUnknown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceControlState_Statics::NewProp_Filename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceControlState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
		nullptr,
		&NewStructOps,
		"SourceControlState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSourceControlState),
		alignof(FSourceControlState),
		Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceControlState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceControlState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceControlState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceControlState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SourceControl();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceControlState"), sizeof(FSourceControlState), Get_Z_Construct_UScriptStruct_FSourceControlState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceControlState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceControlState_CRC() { return 3859206497U; }
	void USourceControlHelpers::StaticRegisterNativesUSourceControlHelpers()
	{
		UClass* Class = USourceControlHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInFile", &USourceControlHelpers::execCheckInFile },
			{ "CheckInFiles", &USourceControlHelpers::execCheckInFiles },
			{ "CheckOutFile", &USourceControlHelpers::execCheckOutFile },
			{ "CheckOutFiles", &USourceControlHelpers::execCheckOutFiles },
			{ "CheckOutOrAddFile", &USourceControlHelpers::execCheckOutOrAddFile },
			{ "CopyFile", &USourceControlHelpers::execCopyFile },
			{ "CurrentProvider", &USourceControlHelpers::execCurrentProvider },
			{ "IsAvailable", &USourceControlHelpers::execIsAvailable },
			{ "IsEnabled", &USourceControlHelpers::execIsEnabled },
			{ "LastErrorMsg", &USourceControlHelpers::execLastErrorMsg },
			{ "MarkFileForAdd", &USourceControlHelpers::execMarkFileForAdd },
			{ "MarkFileForDelete", &USourceControlHelpers::execMarkFileForDelete },
			{ "MarkFilesForAdd", &USourceControlHelpers::execMarkFilesForAdd },
			{ "QueryFileState", &USourceControlHelpers::execQueryFileState },
			{ "RevertFile", &USourceControlHelpers::execRevertFile },
			{ "RevertFiles", &USourceControlHelpers::execRevertFiles },
			{ "RevertUnchangedFile", &USourceControlHelpers::execRevertUnchangedFile },
			{ "RevertUnchangedFiles", &USourceControlHelpers::execRevertUnchangedFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics
	{
		struct SourceControlHelpers_eventCheckInFile_Parms
		{
			FString InFile;
			FString InDescription;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckInFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckInFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckInFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckInFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription = { UE4CodeGen_Private::EPropertyClass::Str, "InDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFile_Parms, InDescription), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check in a file.\n@note        Blocks until action is complete.\n\n@param       InFile                  The file to check in - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDescription   Description for check in\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckInFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventCheckInFile_Parms), Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckInFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics
	{
		struct SourceControlHelpers_eventCheckInFiles_Parms
		{
			TArray<FString> InFiles;
			FString InDescription;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckInFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckInFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckInFiles_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckInFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription = { UE4CodeGen_Private::EPropertyClass::Str, "InDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFiles_Parms, InDescription), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles = { UE4CodeGen_Private::EPropertyClass::Array, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckInFiles_Parms, InFiles), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::NewProp_InFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check in specified files.\n@note        Blocks until action is complete.\n\n@param       InFiles                 Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDescription   Description for check in\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckInFiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SourceControlHelpers_eventCheckInFiles_Parms), Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckInFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckInFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics
	{
		struct SourceControlHelpers_eventCheckOutFile_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out a file.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckOutFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventCheckOutFile_Parms), Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics
	{
		struct SourceControlHelpers_eventCheckOutFiles_Parms
		{
			TArray<FString> InFiles;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutFiles_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles = { UE4CodeGen_Private::EPropertyClass::Array, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutFiles_Parms, InFiles), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::NewProp_InFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out specified files.\n@note        Blocks until action is complete.\n\n@param       InFiles         Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckOutFiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SourceControlHelpers_eventCheckOutFiles_Parms), Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics
	{
		struct SourceControlHelpers_eventCheckOutOrAddFile_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutOrAddFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutOrAddFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCheckOutOrAddFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCheckOutOrAddFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCheckOutOrAddFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to check out file or mark it for add.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to check out/add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CheckOutOrAddFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventCheckOutOrAddFile_Parms), Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics
	{
		struct SourceControlHelpers_eventCopyFile_Parms
		{
			FString InSourceFile;
			FString InDestFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDestFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDestFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSourceFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSourceFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCopyFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventCopyFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventCopyFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile = { UE4CodeGen_Private::EPropertyClass::Str, "InDestFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFile_Parms, InDestFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile = { UE4CodeGen_Private::EPropertyClass::Str, "InSourceFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCopyFile_Parms, InSourceFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InDestFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::NewProp_InSourceFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to copy a file.\n@note        Blocks until action is complete.\n\n@param       InSourceFile    Source file string to copy from - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       InDestFile              Source file string to copy to - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard). If package, then uses same extension as source file.\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CopyFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventCopyFile_Parms), Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics
	{
		struct SourceControlHelpers_eventCurrentProvider_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventCurrentProvider_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine the name of the current source control provider.\n@return      the name of the current source control provider. If one is not set then \"None\" is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "CurrentProvider", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SourceControlHelpers_eventCurrentProvider_Parms), Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_CurrentProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_CurrentProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics
	{
		struct SourceControlHelpers_eventIsAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventIsAvailable_Parms), &Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Quick check if currently set source control provider is enabled and available for use\n(server-based providers can use this to return whether the server is available or not)\n\n@return      true if source control is available, false if it is not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "IsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SourceControlHelpers_eventIsAvailable_Parms), Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics
	{
		struct SourceControlHelpers_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventIsEnabled_Parms), &Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Determine if there is a source control system enabled\n@return      true if enabled, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SourceControlHelpers_eventIsEnabled_Parms), Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics
	{
		struct SourceControlHelpers_eventLastErrorMsg_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventLastErrorMsg_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Get status text set by SourceControl system if an error occurs regardless whether bSilent is set or not.\nOnly set if there was an error." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "LastErrorMsg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(SourceControlHelpers_eventLastErrorMsg_Parms), Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics
	{
		struct SourceControlHelpers_eventMarkFileForAdd_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFileForAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFileForAdd_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventMarkFileForAdd_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to mark a file for add. Does nothing (and returns true) if the file is already under SC\n@note        Blocks until action is complete.\n\n@param       InFile          The file to add - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "MarkFileForAdd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventMarkFileForAdd_Parms), Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics
	{
		struct SourceControlHelpers_eventMarkFileForDelete_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFileForDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFileForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFileForDelete_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFileForDelete_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventMarkFileForDelete_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to remove file from source control and\ndelete the file.\n@note        Blocks until action is complete.\n\n@param       InFile          The file to delete - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "MarkFileForDelete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventMarkFileForDelete_Parms), Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics
	{
		struct SourceControlHelpers_eventMarkFilesForAdd_Parms
		{
			TArray<FString> InFiles;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFilesForAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFilesForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventMarkFilesForAdd_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventMarkFilesForAdd_Parms), &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles = { UE4CodeGen_Private::EPropertyClass::Array, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventMarkFilesForAdd_Parms, InFiles), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::NewProp_InFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to mark files for add. Does nothing (and returns true) for any file that is already under SC\n@note        Blocks until action is complete.\n\n@param       InFiles         Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent         if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "MarkFilesForAdd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SourceControlHelpers_eventMarkFilesForAdd_Parms), Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics
	{
		struct SourceControlHelpers_eventQueryFileState_Parms
		{
			FString InFile;
			bool bSilent;
			FSourceControlState ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventQueryFileState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSourceControlState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventQueryFileState_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventQueryFileState_Parms), &Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventQueryFileState_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to query a file's source control state.\n@note        Blocks until action is complete.\n\n@param       InFile                  The file to query - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent                 if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      Source control state - see USourceControlState. It will have bIsValid set to false if\n                     it could not have its values set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "QueryFileState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventQueryFileState_Parms), Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_QueryFileState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_QueryFileState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics
	{
		struct SourceControlHelpers_eventRevertFile_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventRevertFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert a file regardless whether any changes will be lost or not.\n@note        Blocks until action is complete.\n\n@param       InFile  The file to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "RevertFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventRevertFile_Parms), Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics
	{
		struct SourceControlHelpers_eventRevertFiles_Parms
		{
			TArray<FString> InFiles;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertFiles_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles = { UE4CodeGen_Private::EPropertyClass::Array, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventRevertFiles_Parms, InFiles), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::NewProp_InFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert files regardless whether any changes will be lost or not.\n@note        Blocks until action is complete.\n\n@param       InFiles Files to revert - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "RevertFiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SourceControlHelpers_eventRevertFiles_Parms), Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics
	{
		struct SourceControlHelpers_eventRevertUnchangedFile_Parms
		{
			FString InFile;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertUnchangedFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertUnchangedFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertUnchangedFile_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertUnchangedFile_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile = { UE4CodeGen_Private::EPropertyClass::Str, "InFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventRevertUnchangedFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert a file provided no changes have been made.\n@note        Blocks until action is complete.\n\n@param       InFile  File to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "RevertUnchangedFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SourceControlHelpers_eventRevertUnchangedFile_Parms), Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics
	{
		struct SourceControlHelpers_eventRevertUnchangedFiles_Parms
		{
			TArray<FString> InFiles;
			bool bSilent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertUnchangedFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertUnchangedFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((SourceControlHelpers_eventRevertUnchangedFiles_Parms*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SourceControlHelpers_eventRevertUnchangedFiles_Parms), &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles = { UE4CodeGen_Private::EPropertyClass::Array, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SourceControlHelpers_eventRevertUnchangedFiles_Parms, InFiles), METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::NewProp_InFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Source Control Helpers" },
		{ "CPP_Default_bSilent", "false" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ToolTip", "Use currently set source control provider to revert files provided no changes have been made.\n@note        Blocks until action is complete.\n\n@param       InFiles Files to check out - can be either fully qualified path, relative path, long package name, asset path or export text path (often stored on clipboard)\n@param       bSilent if false (default) then write out any error info to the Log. Any error text can be retrieved by LastErrorMsg() regardless.\n@return      true if succeeded, false if failed and can call LastErrorMsg() for more info." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceControlHelpers, "RevertUnchangedFiles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SourceControlHelpers_eventRevertUnchangedFiles_Parms), Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceControlHelpers_NoRegister()
	{
		return USourceControlHelpers::StaticClass();
	}
	struct Z_Construct_UClass_USourceControlHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceControlHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceControlHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckInFile, "CheckInFile" }, // 3254954156
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckInFiles, "CheckInFiles" }, // 4140377091
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutFile, "CheckOutFile" }, // 2073813893
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutFiles, "CheckOutFiles" }, // 3051721520
		{ &Z_Construct_UFunction_USourceControlHelpers_CheckOutOrAddFile, "CheckOutOrAddFile" }, // 2638663613
		{ &Z_Construct_UFunction_USourceControlHelpers_CopyFile, "CopyFile" }, // 1994153520
		{ &Z_Construct_UFunction_USourceControlHelpers_CurrentProvider, "CurrentProvider" }, // 3945983391
		{ &Z_Construct_UFunction_USourceControlHelpers_IsAvailable, "IsAvailable" }, // 3802612344
		{ &Z_Construct_UFunction_USourceControlHelpers_IsEnabled, "IsEnabled" }, // 734928605
		{ &Z_Construct_UFunction_USourceControlHelpers_LastErrorMsg, "LastErrorMsg" }, // 243956377
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFileForAdd, "MarkFileForAdd" }, // 1338070710
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFileForDelete, "MarkFileForDelete" }, // 3638731174
		{ &Z_Construct_UFunction_USourceControlHelpers_MarkFilesForAdd, "MarkFilesForAdd" }, // 1121098225
		{ &Z_Construct_UFunction_USourceControlHelpers_QueryFileState, "QueryFileState" }, // 3873170426
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertFile, "RevertFile" }, // 3673069787
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertFiles, "RevertFiles" }, // 2873336682
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFile, "RevertUnchangedFile" }, // 2200153764
		{ &Z_Construct_UFunction_USourceControlHelpers_RevertUnchangedFiles, "RevertUnchangedFiles" }, // 3656150715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceControlHelpers.h" },
		{ "ModuleRelativePath", "Public/SourceControlHelpers.h" },
		{ "ScriptName", "SourceControl" },
		{ "ToolTip", "Editor source control common functionality.\n\n@note Many of these source control methods use *smart* file strings which can be one of:\n  - fully qualified path\n  - relative path\n  - long package name\n  - asset path\n  - export text path (often stored on clipboard)\n\n  For example:\n     - D:\\Epic\\Dev-Ent\\Projects\\Python3rdBP\\Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n     - Content\\Mannequin\\Animations\\ThirdPersonIdle.uasset\n     - /Game/Mannequin/Animations/ThirdPersonIdle\n     - /Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle\n     - AnimSequence'/Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle'" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceControlHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceControlHelpers_Statics::ClassParams = {
		&USourceControlHelpers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A9u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USourceControlHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USourceControlHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceControlHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceControlHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceControlHelpers, 2352432972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceControlHelpers(Z_Construct_UClass_USourceControlHelpers, &USourceControlHelpers::StaticClass, TEXT("/Script/SourceControl"), TEXT("USourceControlHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
