// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavSystemConfigOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavSystemConfigOverride() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void ANavSystemConfigOverride::StaticRegisterNativesANavSystemConfigOverride()
	{
#if WITH_EDITOR
		UClass* Class = ANavSystemConfigOverride::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyChanges", &ANavSystemConfigOverride::execApplyChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "made an explicit function since rebuilding navigation system can be expensive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavSystemConfigOverride, "ApplyChanges", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x20020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister()
	{
		return ANavSystemConfigOverride::StaticClass();
	}
	struct Z_Construct_UClass_ANavSystemConfigOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadOnClient_MetaData[];
#endif
		static void NewProp_bLoadOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationSystemConfig;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavSystemConfigOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavSystemConfigOverride_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges, "ApplyChanges" }, // 642859119
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Actor LOD Cooking" },
		{ "IncludePath", "NavSystemConfigOverride.h" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	void Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit(void* Obj)
	{
		((ANavSystemConfigOverride*)Obj)->bLoadOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadOnClient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavSystemConfigOverride), &Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig = { UE4CodeGen_Private::EPropertyClass::Object, "NavigationSystemConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008001d, 1, nullptr, STRUCT_OFFSET(ANavSystemConfigOverride, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavSystemConfigOverride, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavSystemConfigOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavSystemConfigOverride>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams = {
		&ANavSystemConfigOverride::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavSystemConfigOverride()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavSystemConfigOverride, 1457629536);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavSystemConfigOverride(Z_Construct_UClass_ANavSystemConfigOverride, &ANavSystemConfigOverride::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavSystemConfigOverride"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavSystemConfigOverride);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
