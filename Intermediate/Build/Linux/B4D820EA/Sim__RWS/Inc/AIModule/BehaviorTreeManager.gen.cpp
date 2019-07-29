// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeManager() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FBehaviorTreeTemplateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, Z_Construct_UPackage__Script_AIModule(), TEXT("BehaviorTreeTemplateInfo"), sizeof(FBehaviorTreeTemplateInfo), Get_Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBehaviorTreeTemplateInfo(FBehaviorTreeTemplateInfo::StaticStruct, TEXT("/Script/AIModule"), TEXT("BehaviorTreeTemplateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo
{
	FScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BehaviorTreeTemplateInfo")),new UScriptStruct::TCppStructOps<FBehaviorTreeTemplateInfo>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo;
	struct Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeTemplateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized template" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template = { UE4CodeGen_Private::EPropertyClass::Object, "Template", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Template), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "behavior tree asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset = { UE4CodeGen_Private::EPropertyClass::Object, "Asset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBehaviorTreeTemplateInfo, Asset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BehaviorTreeTemplateInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBehaviorTreeTemplateInfo),
		alignof(FBehaviorTreeTemplateInfo),
		Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BehaviorTreeTemplateInfo"), sizeof(FBehaviorTreeTemplateInfo), Get_Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo_CRC() { return 1315273679U; }
	void UBehaviorTreeManager::StaticRegisterNativesUBehaviorTreeManager()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister()
	{
		return UBehaviorTreeManager::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedTemplates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadedTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDebuggerSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDebuggerSteps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeManager.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, ActiveComponents), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "initialized tree templates" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "LoadedTemplates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, LoadedTemplates), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadedTemplates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBehaviorTreeTemplateInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeManager.h" },
		{ "ToolTip", "limit for recording execution steps for debugger" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDebuggerSteps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UBehaviorTreeManager, MaxDebuggerSteps), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_ActiveComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_LoadedTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeManager_Statics::NewProp_MaxDebuggerSteps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams = {
		&UBehaviorTreeManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000ACu,
		nullptr, 0,
		Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeManager, 3944295283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeManager(Z_Construct_UClass_UBehaviorTreeManager, &UBehaviorTreeManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTreeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
