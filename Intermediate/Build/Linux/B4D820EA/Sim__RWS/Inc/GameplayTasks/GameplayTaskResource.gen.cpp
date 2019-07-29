// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/GameplayTaskResource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTaskResource() {}
// Cross Module References
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	void UGameplayTaskResource::StaticRegisterNativesUGameplayTaskResource()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister()
	{
		return UGameplayTaskResource::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTaskResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManuallySetID_MetaData[];
#endif
		static void NewProp_bManuallySetID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManuallySetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoResourceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_AutoResourceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualResourceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManualResourceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTaskResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTaskResource.h" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData[] = {
		{ "Category", "Task Resource" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_SetBit(void* Obj)
	{
		((UGameplayTaskResource*)Obj)->bManuallySetID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID = { UE4CodeGen_Private::EPropertyClass::Bool, "bManuallySetID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGameplayTaskResource), &Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID = { UE4CodeGen_Private::EPropertyClass::Int8, "AutoResourceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTaskResource, AutoResourceID), METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData[] = {
		{ "Category", "Task Resource" },
		{ "ClampMax", "15" },
		{ "ClampMin", "-1" },
		{ "EditCondition", "bManuallySetID" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
		{ "ToolTip", "Overrides AutoResourceID. -1 means auto ID will be applied" },
		{ "UIMax", "15" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID = { UE4CodeGen_Private::EPropertyClass::Int, "ManualResourceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000014015, 1, nullptr, STRUCT_OFFSET(UGameplayTaskResource, ManualResourceID), METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTaskResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTaskResource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTaskResource_Statics::ClassParams = {
		&UGameplayTaskResource::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x041000A5u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTaskResource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTaskResource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTaskResource, 1828581195);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTaskResource(Z_Construct_UClass_UGameplayTaskResource, &UGameplayTaskResource::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTaskResource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTaskResource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
