// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/Tasks/GameplayTask_ClaimResource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_ClaimResource() {}
// Cross Module References
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_ClaimResource();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources();
// End Cross Module References
	void UGameplayTask_ClaimResource::StaticRegisterNativesUGameplayTask_ClaimResource()
	{
		UClass* Class = UGameplayTask_ClaimResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimResource", &UGameplayTask_ClaimResource::execClaimResource },
			{ "ClaimResources", &UGameplayTask_ClaimResource::execClaimResources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics
	{
		struct GameplayTask_ClaimResource_eventClaimResource_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
			uint8 Priority;
			FName TaskInstanceName;
			UGameplayTask_ClaimResource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InTaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName = { UE4CodeGen_Private::EPropertyClass::Name, "TaskInstanceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, TaskInstanceName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, ResourceClass), Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_InTaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "InTaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, InTaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ResourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_InTaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Priority, TaskInstanceName" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_Priority", "192" },
		{ "CPP_Default_TaskInstanceName", "None" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_ClaimResource, "ClaimResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameplayTask_ClaimResource_eventClaimResource_Parms), Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics
	{
		struct GameplayTask_ClaimResource_eventClaimResources_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
			TArray<TSubclassOf<UGameplayTaskResource> > ResourceClasses;
			uint8 Priority;
			FName TaskInstanceName;
			UGameplayTask_ClaimResource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResourceClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClasses_Inner;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InTaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName = { UE4CodeGen_Private::EPropertyClass::Name, "TaskInstanceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, TaskInstanceName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses = { UE4CodeGen_Private::EPropertyClass::Array, "ResourceClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, ResourceClasses), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_InTaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "InTaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, InTaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_InTaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Priority, TaskInstanceName" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_Priority", "192" },
		{ "CPP_Default_TaskInstanceName", "None" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_ClaimResource, "ClaimResources", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameplayTask_ClaimResource_eventClaimResources_Parms), Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister()
	{
		return UGameplayTask_ClaimResource::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_ClaimResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource, "ClaimResource" }, // 1579455010
		{ &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources, "ClaimResources" }, // 445354680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tasks/GameplayTask_ClaimResource.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_ClaimResource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::ClassParams = {
		&UGameplayTask_ClaimResource::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_ClaimResource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask_ClaimResource, 2644662004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_ClaimResource(Z_Construct_UClass_UGameplayTask_ClaimResource, &UGameplayTask_ClaimResource::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_ClaimResource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_ClaimResource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
