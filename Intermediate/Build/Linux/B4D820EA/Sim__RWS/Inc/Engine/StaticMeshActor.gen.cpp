// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/StaticMeshActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AStaticMeshActor_SetMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStaticMeshActor::StaticRegisterNativesAStaticMeshActor()
	{
		UClass* Class = AStaticMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMobility", &AStaticMeshActor::execSetMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics
	{
		struct StaticMeshActor_eventSetMobility_Parms
		{
			TEnumAsByte<EComponentMobility::Type> InMobility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMobility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility = { UE4CodeGen_Private::EPropertyClass::Byte, "InMobility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMeshActor_eventSetMobility_Parms, InMobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobility" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "Function to change mobility type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticMeshActor, "SetMobility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StaticMeshActor_eventSetMobility_Parms), Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticMeshActor_SetMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister()
	{
		return AStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshReplicateMovement_MetaData[];
#endif
		static void NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStaticMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticMeshActor_SetMobility, "SetMobility" }, // 3509644192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/StaticMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "StaticMeshActor is an instance of a UStaticMesh in the world.\nStatic meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\nStatic meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n@see UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationGeometryGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(AStaticMeshActor, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not)" },
	};
#endif
	void Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj)
	{
		((AStaticMeshActor*)Obj)->bStaticMeshReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bStaticMeshReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStaticMeshActor), &Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AStaticMeshActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams = {
		&AStaticMeshActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticMeshActor, 2512465617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticMeshActor(Z_Construct_UClass_AStaticMeshActor, &AStaticMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("AStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AStaticMeshActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
