// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/IUserListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserListEntry() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNativeUserListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNativeUserListEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded();
	UMG_API UFunction* Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry();
	UMG_API UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased();
	UMG_API UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged();
	UMG_API UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged();
// End Cross Module References
	void UNativeUserListEntry::StaticRegisterNativesUNativeUserListEntry()
	{
		UClass* Class = UNativeUserListEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsListItemExpanded", &INativeUserListEntry::execIsListItemExpanded },
			{ "IsListItemSelected", &INativeUserListEntry::execIsListItemSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics
	{
		struct NativeUserListEntry_eventIsListItemExpanded_Parms
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
	void Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NativeUserListEntry_eventIsListItemExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NativeUserListEntry_eventIsListItemExpanded_Parms), &Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "@return True if the item represented by this entry is currently expanded and showing its children. Tree view entries only." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeUserListEntry, "IsListItemExpanded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NativeUserListEntry_eventIsListItemExpanded_Parms), Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics
	{
		struct NativeUserListEntry_eventIsListItemSelected_Parms
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
	void Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NativeUserListEntry_eventIsListItemSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NativeUserListEntry_eventIsListItemSelected_Parms), &Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "@return True if the item represented by this entry is currently selected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeUserListEntry, "IsListItemSelected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NativeUserListEntry_eventIsListItemSelected_Parms), Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNativeUserListEntry_NoRegister()
	{
		return UNativeUserListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UNativeUserListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNativeUserListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNativeUserListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNativeUserListEntry_IsListItemExpanded, "IsListItemExpanded" }, // 3512201324
		{ &Z_Construct_UFunction_UNativeUserListEntry_IsListItemSelected, "IsListItemSelected" }, // 912739431
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeUserListEntry_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNativeUserListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INativeUserListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNativeUserListEntry_Statics::ClassParams = {
		&UNativeUserListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNativeUserListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNativeUserListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNativeUserListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNativeUserListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNativeUserListEntry, 2396676072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNativeUserListEntry(Z_Construct_UClass_UNativeUserListEntry, &UNativeUserListEntry::StaticClass, TEXT("/Script/UMG"), TEXT("UNativeUserListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeUserListEntry);
	void IUserListEntry::BP_OnEntryReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryReleased instead.");
	}
	void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemExpansionChanged instead.");
	}
	void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemSelectionChanged instead.");
	}
	void UUserListEntry::StaticRegisterNativesUUserListEntry()
	{
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "DisplayName", "On Entry Released" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when this entry is released from the owning table and no longer represents any list item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, "BP_OnEntryReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics
	{
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UserListEntry_eventBP_OnItemExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExpanded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the expansion state of the item represented by this entry changes. Tree view entries only." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, "BP_OnItemExpansionChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics
	{
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UserListEntry_eventBP_OnItemSelectionChanged_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the selection state of the item represented by this entry changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, "BP_OnItemSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserListEntry_NoRegister()
	{
		return UUserListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UUserListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNativeUserListEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased, "BP_OnEntryReleased" }, // 2469968861
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged, "BP_OnItemExpansionChanged" }, // 3323887776
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged, "BP_OnItemSelectionChanged" }, // 3606145155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserListEntry_Statics::ClassParams = {
		&UUserListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserListEntry, 2747071317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserListEntry(Z_Construct_UClass_UUserListEntry, &UUserListEntry::StaticClass, TEXT("/Script/UMG"), TEXT("UUserListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserListEntry);
	static FName NAME_UUserListEntry_BP_OnEntryReleased = FName(TEXT("BP_OnEntryReleased"));
	void IUserListEntry::Execute_BP_OnEntryReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnEntryReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UUserListEntry_BP_OnItemExpansionChanged = FName(TEXT("BP_OnItemExpansionChanged"));
	void IUserListEntry::Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UserListEntry_eventBP_OnItemExpansionChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemExpansionChanged);
		if (Func)
		{
			Parms.bIsExpanded=bIsExpanded;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UUserListEntry_BP_OnItemSelectionChanged = FName(TEXT("BP_OnItemSelectionChanged"));
	void IUserListEntry::Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
		UserListEntry_eventBP_OnItemSelectionChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemSelectionChanged);
		if (Func)
		{
			Parms.bIsSelected=bIsSelected;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
