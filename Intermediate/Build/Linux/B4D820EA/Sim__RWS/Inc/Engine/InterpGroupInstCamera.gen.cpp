// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupInstCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInstCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupInstCamera::StaticRegisterNativesUInterpGroupInstCamera()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister()
	{
		return UInterpGroupInstCamera::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupInstCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupInstCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroupInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpGroupInstCamera.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInstCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupInstCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupInstCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupInstCamera_Statics::ClassParams = {
		&UInterpGroupInstCamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupInstCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroupInstCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroupInstCamera, 2536258076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupInstCamera(Z_Construct_UClass_UInterpGroupInstCamera, &UInterpGroupInstCamera::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupInstCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInstCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
