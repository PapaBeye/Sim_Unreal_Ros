// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckGameplayTagsOnActor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_CheckGameplayTagsOnActor::StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_NoRegister()
	{
		return UBTDecorator_CheckGameplayTagsOnActor::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TagsToMatch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TagsToMatch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorToCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTip", "GameplayTag decorator node.\nA decorator node that bases its condition on whether the specified Actor (in the blackboard) has a Gameplay Tag or\nTags specified." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTip", "cached description" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription = { UE4CodeGen_Private::EPropertyClass::Str, "CachedDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch = { UE4CodeGen_Private::EPropertyClass::Enum, "TagsToMatch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTips", "Which Actor (from the blackboard) should be checked for these gameplay tags?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorToCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckGameplayTagsOnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::ClassParams = {
		&UBTDecorator_CheckGameplayTagsOnActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_CheckGameplayTagsOnActor, 471300757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CheckGameplayTagsOnActor(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor, &UBTDecorator_CheckGameplayTagsOnActor::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_CheckGameplayTagsOnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckGameplayTagsOnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
