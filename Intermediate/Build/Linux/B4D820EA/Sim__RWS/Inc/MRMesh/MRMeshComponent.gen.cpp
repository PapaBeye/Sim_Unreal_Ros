// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRMesh/Public/MRMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRMeshComponent() {}
// Cross Module References
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	MRMESH_API UFunction* Z_Construct_UFunction_UMRMeshComponent_Clear();
	MRMESH_API UFunction* Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate();
	MRMESH_API UFunction* Z_Construct_UFunction_UMRMeshComponent_IsConnected();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMRMeshComponent::StaticRegisterNativesUMRMeshComponent()
	{
		UClass* Class = UMRMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UMRMeshComponent::execClear },
			{ "ForceNavMeshUpdate", &UMRMeshComponent::execForceNavMeshUpdate },
			{ "IsConnected", &UMRMeshComponent::execIsConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRMeshComponent_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, "Clear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, "ForceNavMeshUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics
	{
		struct MRMeshComponent_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MRMeshComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, "IsConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MRMeshComponent_eventIsConnected_Parms), Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister()
	{
		return UMRMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodySetups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[];
#endif
		static void NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavMeshOnMeshUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMeshProxySections_MetaData[];
#endif
		static void NewProp_bCreateMeshProxySections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMeshProxySections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRMeshComponent_Clear, "Clear" }, // 1895484622
		{ &Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate, "ForceNavMeshUpdate" }, // 117304581
		{ &Z_Construct_UFunction_UMRMeshComponent_IsConnected, "IsConnected" }, // 3480340999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Experimental", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups = { UE4CodeGen_Private::EPropertyClass::Array, "BodySetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UMRMeshComponent, BodySetups), METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bUpdateNavMeshOnMeshUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateNavMeshOnMeshUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bCreateMeshProxySections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateMeshProxySections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMRMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodySetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams = {
		&UMRMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMRMeshComponent, 2772994603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRMeshComponent(Z_Construct_UClass_UMRMeshComponent, &UMRMeshComponent::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMRMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
