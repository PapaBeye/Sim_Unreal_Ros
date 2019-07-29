// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ChildActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UChildActorComponent::StaticRegisterNativesUChildActorComponent()
	{
		UClass* Class = UChildActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChildActorClass", &UChildActorComponent::execSetChildActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics
	{
		struct ChildActorComponent_eventSetChildActorClass_Parms
		{
			TSubclassOf<AActor>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass = { UE4CodeGen_Private::EPropertyClass::Class, "InClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(ChildActorComponent_eventSetChildActorClass_Parms, InClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildActorComponent, "SetChildActorClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChildActorComponent_eventSetChildActorClass_Parms), Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChildActorComponent_NoRegister()
	{
		return UChildActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChildActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActorTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChildActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChildActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChildActorComponent_SetChildActorClass, "SetChildActorClass" }, // 1501760363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ChildActorComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A component that spawns an Actor when registered, and destroys it when unregistered." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData[] = {
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "ChildActorTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000230001, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The actor that we spawned and own" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor = { UE4CodeGen_Private::EPropertyClass::Object, "ChildActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040c00000000034, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "ForceRebuildProperty", "ChildActorTemplate" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "OnlyPlaceable", "" },
		{ "ToolTip", "The class of Actor to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "ChildActorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000015, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChildActorComponent_Statics::ClassParams = {
		&UChildActorComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UChildActorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChildActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChildActorComponent, 102632928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildActorComponent(Z_Construct_UClass_UChildActorComponent, &UChildActorComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UChildActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildActorComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
