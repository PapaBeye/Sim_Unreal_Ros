// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoundActorProxy(FBoundActorProxy::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("BoundActorProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoundActorProxy")),new UScriptStruct::TCppStructOps<FBoundActorProxy>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy;
	struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Specifies the actor to override the binding with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor = { UE4CodeGen_Private::EPropertyClass::Object, "BoundActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040800000801, 1, nullptr, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"BoundActorProxy",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBoundActorProxy),
		alignof(FBoundActorProxy),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers), 0),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC() { return 1525841949U; }
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams = {
		&ULevelSequenceBurnInInitSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInInitSettings, 1018964775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings(Z_Construct_UClass_ULevelSequenceBurnInInitSettings, &ULevelSequenceBurnInInitSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInInitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
		UClass* Class = ULevelSequenceBurnInOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBurnIn", &ULevelSequenceBurnInOptions::execSetBurnIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics
	{
		struct LevelSequenceBurnInOptions_eventSetBurnIn_Parms
		{
			FSoftClassPath InBurnInClass;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBurnInClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass = { UE4CodeGen_Private::EPropertyClass::Struct, "InBurnInClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceBurnInOptions_eventSetBurnIn_Parms, InBurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Loads the specified class path and initializes an instance, then stores it in Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnInOptions, "SetBurnIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LevelSequenceBurnInOptions_eventSetBurnIn_Parms), Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[];
#endif
		static void NewProp_bUseBurnIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn, "SetBurnIn" }, // 3571077305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Object, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008000d, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "MetaClass", "LevelSequenceBurnIn" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass = { UE4CodeGen_Private::EPropertyClass::Struct, "BurnInClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void* Obj)
	{
		((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBurnIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULevelSequenceBurnInOptions), &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams = {
		&ULevelSequenceBurnInOptions::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B004A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInOptions, 1602850474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions(Z_Construct_UClass_ULevelSequenceBurnInOptions, &ULevelSequenceBurnInOptions::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &ALevelSequenceActor::execAddBinding },
			{ "GetSequence", &ALevelSequenceActor::execGetSequence },
			{ "RemoveBinding", &ALevelSequenceActor::execRemoveBinding },
			{ "ResetBinding", &ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", &ALevelSequenceActor::execResetBindings },
			{ "SetBinding", &ALevelSequenceActor::execSetBinding },
			{ "SetEventReceivers", &ALevelSequenceActor::execSetEventReceivers },
			{ "SetSequence", &ALevelSequenceActor::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBindingsFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventAddBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actor Actor to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "AddBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventAddBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			bool bLoad;
			bool bInitializePlayer;
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bInitializePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializePlayer;
		static void NewProp_bLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bInitializePlayer_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventGetSequence_Parms*)Obj)->bInitializePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bInitializePlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitializePlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventGetSequence_Parms), &Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bInitializePlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bLoad_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventGetSequence_Parms*)Obj)->bLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventGetSequence_Parms), &Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bInitializePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_bLoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "CPP_Default_bInitializePlayer", "false" },
		{ "CPP_Default_bLoad", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@param bLoad Whether to load the sequence object if it is not already in memory.\n@param bInitializePlayer Whether to initialize the player when the sequence has been loaded.\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "GetSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelSequenceActor_eventGetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "RemoveBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventRemoveBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "ResetBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventResetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "ResetBindings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBindingsFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actors Actors to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(LevelSequenceActor_eventSetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics
	{
		struct LevelSequenceActor_eventSetEventReceivers_Parms
		{
			TArray<AActor*> AdditionalReceivers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalReceivers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetEventReceivers_Parms, AdditionalReceivers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set an array of additional actors that will receive events triggerd from this sequence actor\n\n@param AdditionalReceivers An array of actors to receive events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventSetEventReceivers_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence = { UE4CodeGen_Private::EPropertyClass::Object, "InSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventSetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceData_MetaData[];
#endif
		static void NewProp_bOverrideInstanceData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BindingOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 2258429793
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 2708941779
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 4081705540
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 2272363609
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 3273341991
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 3354925703
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers, "SetEventReceivers" }, // 2203535682
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 209255623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics LOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Burn-in widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance = { UE4CodeGen_Private::EPropertyClass::Object, "BurnInInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Instance data that can be used to dynamically control sequence evaluation at runtime" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultInstanceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008000c, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, DefaultInstanceData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bOverrideInstanceData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideInstanceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides = { UE4CodeGen_Private::EPropertyClass::Object, "BindingOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008001c, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions = { UE4CodeGen_Private::EPropertyClass::Object, "BurnInOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008001c, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, AdditionalEventReceivers), METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowedClasses", "LevelSequence" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "Category", "Playback" },
		{ "ExposeFunctionCategories", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer = { UE4CodeGen_Private::EPropertyClass::Object, "SequencePlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002014, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams = {
		&ALevelSequenceActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelSequenceActor, 2075017010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceActor(Z_Construct_UClass_ALevelSequenceActor, &ALevelSequenceActor::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
