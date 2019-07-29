// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackToggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackToggle() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static UEnum* ETrackToggleAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrackToggleAction, Z_Construct_UPackage__Script_Engine(), TEXT("ETrackToggleAction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackToggleAction(ETrackToggleAction_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrackToggleAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrackToggleAction_CRC() { return 2227710841U; }
	UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackToggleAction"), 0, Get_Z_Construct_UEnum_Engine_ETrackToggleAction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETTA_Off", (int64)ETTA_Off },
				{ "ETTA_On", (int64)ETTA_On },
				{ "ETTA_Toggle", (int64)ETTA_Toggle },
				{ "ETTA_Trigger", (int64)ETTA_Trigger },
				{ "ETTA_MAX", (int64)ETTA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
				{ "ToolTip", "Enumeration indicating toggle action" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrackToggleAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETrackToggleAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FToggleTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToggleTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("ToggleTrackKey"), sizeof(FToggleTrackKey), Get_Z_Construct_UScriptStruct_FToggleTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToggleTrackKey(FToggleTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("ToggleTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToggleTrackKey")),new UScriptStruct::TCppStructOps<FToggleTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey;
	struct Z_Construct_UScriptStruct_FToggleTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToggleAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Information for one toggle in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToggleTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData[] = {
		{ "Category", "ToggleTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction = { UE4CodeGen_Private::EPropertyClass::Byte, "ToggleAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FToggleTrackKey, ToggleAction), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FToggleTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ToggleTrackKey",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FToggleTrackKey),
		alignof(FToggleTrackKey),
		Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToggleTrackKey"), sizeof(FToggleTrackKey), Get_Z_Construct_UScriptStruct_FToggleTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_CRC() { return 417319494U; }
	void UInterpTrackToggle::StaticRegisterNativesUInterpTrackToggle()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister()
	{
		return UInterpTrackToggle::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackToggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateWithJustAttachedFlag_MetaData[];
#endif
		static void NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateWithJustAttachedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateSystemEachUpdate_MetaData[];
#endif
		static void NewProp_bActivateSystemEachUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateSystemEachUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggleTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToggleTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackToggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Toggle Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackToggle.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenJumpingForwards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will activate the system w/ the 'Just Attached' flag." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateWithJustAttachedFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag = { UE4CodeGen_Private::EPropertyClass::Bool, "bActivateWithJustAttachedFlag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will call ActivateSystem on the emitter each update (the old 'incorrect' behavior).\nIf false (the default), the System will only be activated if it was previously inactive." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateSystemEachUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bActivateSystemEachUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack = { UE4CodeGen_Private::EPropertyClass::Array, "ToggleTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackToggle, ToggleTrack), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ToggleTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FToggleTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackToggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackToggle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams = {
		&UInterpTrackToggle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackToggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackToggle, 892765323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackToggle(Z_Construct_UClass_UInterpTrackToggle, &UInterpTrackToggle::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackToggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackToggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
