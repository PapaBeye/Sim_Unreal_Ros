// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstToggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstToggle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
// End Cross Module References
	void UInterpTrackInstToggle::StaticRegisterNativesUInterpTrackInstToggle()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister()
	{
		return UInterpTrackInstToggle::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstToggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedActiveState_MetaData[];
#endif
		static void NewProp_bSavedActiveState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedActiveState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstToggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstToggle.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
		{ "ToolTip", "Cached 'active' state for the toggleable actor before we possessed it; restored when Matinee exits" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_SetBit(void* Obj)
	{
		((UInterpTrackInstToggle*)Obj)->bSavedActiveState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState = { UE4CodeGen_Private::EPropertyClass::Bool, "bSavedActiveState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackInstToggle), &Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, toggles between this time and the current time will be processed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstToggle, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InterpTrackInstToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Byte, "Action", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstToggle, Action), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstToggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstToggle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::ClassParams = {
		&UInterpTrackInstToggle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstToggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstToggle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstToggle, 3332871901);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstToggle(Z_Construct_UClass_UInterpTrackInstToggle, &UInterpTrackInstToggle::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstToggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstToggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
