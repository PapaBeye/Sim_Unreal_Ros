// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/IUserObjectListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserObjectListEntry() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet();
// End Cross Module References
	UObject* IUserObjectListEntry::GetListItemObject() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetListItemObject instead.");
		UserObjectListEntry_eventGetListItemObject_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUserObjectListEntry::OnListItemObjectSet(UObject* ListItemObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListItemObjectSet instead.");
	}
	void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry()
	{
		UClass* Class = UUserObjectListEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetListItemObject", &IUserObjectListEntry::execGetListItemObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UserObjectListEntry_eventGetListItemObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Returns the item object that this entry currently represents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntry, "GetListItemObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C080C00, sizeof(UserObjectListEntry_eventGetListItemObject_Parms), Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListItemObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject = { UE4CodeGen_Private::EPropertyClass::Object, "ListItemObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserObjectListEntry_eventOnListItemObjectSet_Parms, ListItemObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Called when the item object represented by this entry is established" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntry, "OnListItemObjectSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(UserObjectListEntry_eventOnListItemObjectSet_Parms), Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister()
	{
		return UUserObjectListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UUserObjectListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserObjectListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserListEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserObjectListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserObjectListEntry_GetListItemObject, "GetListItemObject" }, // 3674023717
		{ &Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet, "OnListItemObjectSet" }, // 931605601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserObjectListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserObjectListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams = {
		&UUserObjectListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserObjectListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserObjectListEntry, 2783721797);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserObjectListEntry(Z_Construct_UClass_UUserObjectListEntry, &UUserObjectListEntry::StaticClass, TEXT("/Script/UMG"), TEXT("UUserObjectListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserObjectListEntry);
	static FName NAME_UUserObjectListEntry_GetListItemObject = FName(TEXT("GetListItemObject"));
	UObject* IUserObjectListEntry::Execute_GetListItemObject(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass()));
		UserObjectListEntry_eventGetListItemObject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserObjectListEntry_GetListItemObject);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUserObjectListEntry*)(O->GetNativeInterfaceAddress(UUserObjectListEntry::StaticClass())))
		{
			Parms.ReturnValue = I->GetListItemObject_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUserObjectListEntry_OnListItemObjectSet = FName(TEXT("OnListItemObjectSet"));
	void IUserObjectListEntry::Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass()));
		UserObjectListEntry_eventOnListItemObjectSet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUserObjectListEntry_OnListItemObjectSet);
		if (Func)
		{
			Parms.ListItemObject=ListItemObject;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
