// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryNode::StaticRegisterNativesUEnvQueryNode()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister()
	{
		return UEnvQueryNode::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryNode.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
		{ "ToolTip", "Versioning for updating deprecated properties" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum = { UE4CodeGen_Private::EPropertyClass::Int, "VerNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryNode, VerNum), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryNode_Statics::NewProp_VerNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryNode_Statics::ClassParams = {
		&UEnvQueryNode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryNode, 2567379553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryNode(Z_Construct_UClass_UEnvQueryNode, &UEnvQueryNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
