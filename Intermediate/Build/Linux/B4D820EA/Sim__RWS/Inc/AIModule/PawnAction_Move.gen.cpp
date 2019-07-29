// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Move() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EPawnActionMoveMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionMoveMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionMoveMode(EPawnActionMoveMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionMoveMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionMoveMode_CRC() { return 4061255231U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionMoveMode"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionMoveMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionMoveMode::UsePathfinding", (int64)EPawnActionMoveMode::UsePathfinding },
				{ "EPawnActionMoveMode::StraightLine", (int64)EPawnActionMoveMode::StraightLine },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPawnActionMoveMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPawnActionMoveMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPawnAction_Move::StaticRegisterNativesUPawnAction_Move()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister()
	{
		return UPawnAction_Move::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Move_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbortChildActionOnPathChange_MetaData[];
#endif
		static void NewProp_bAbortChildActionOnPathChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbortChildActionOnPathChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePathToGoal_MetaData[];
#endif
		static void NewProp_bUpdatePathToGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePathToGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalToNavigation_MetaData[];
#endif
		static void NewProp_bProjectGoalToNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalToNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[];
#endif
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[];
#endif
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinishOnOverlap_MetaData[];
#endif
		static void NewProp_bFinishOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinishOnOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[];
#endif
		static void NewProp_bAllowStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Move_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Move.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, other actions with the same priority will be aborted when path is changed" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAbortChildActionOnPathChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbortChildActionOnPathChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, path to GoalActor will be updated with goal's movement" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bUpdatePathToGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatePathToGoal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, GoalLocation will be projected on navigation before using" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bProjectGoalToNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectGoalToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, movement will use path finding" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bFinishOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bFinishOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAllowStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStrafe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptableRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor = { UE4CodeGen_Private::EPropertyClass::Object, "GoalActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Move_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Move>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Move_Statics::ClassParams = {
		&UPawnAction_Move::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		nullptr, 0,
		Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Move()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_Move_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction_Move, 1897721846);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Move(Z_Construct_UClass_UPawnAction_Move, &UPawnAction_Move::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Move"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Move);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
