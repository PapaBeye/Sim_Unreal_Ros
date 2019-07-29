// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackDirector() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDirectorTrackCut::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectorTrackCut, Z_Construct_UPackage__Script_Engine(), TEXT("DirectorTrackCut"), sizeof(FDirectorTrackCut), Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectorTrackCut(FDirectorTrackCut::StaticStruct, TEXT("/Script/Engine"), TEXT("DirectorTrackCut"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut
{
	FScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectorTrackCut")),new UScriptStruct::TCppStructOps<FDirectorTrackCut>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut;
	struct Z_Construct_UScriptStruct_FDirectorTrackCut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCamGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetCamGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Information for one cut in this track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectorTrackCut>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Shot number for developer reference" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber = { UE4CodeGen_Private::EPropertyClass::Int, "ShotNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, ShotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData[] = {
		{ "Category", "DirectorTrackCut" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "GroupName of UInterpGroup to cut viewpoint to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup = { UE4CodeGen_Private::EPropertyClass::Name, "TargetCamGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, TargetCamGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Time taken to move view to new camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime = { UE4CodeGen_Private::EPropertyClass::Float, "TransitionTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, TransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Time to perform the cut." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DirectorTrackCut",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDirectorTrackCut),
		alignof(FDirectorTrackCut),
		Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectorTrackCut"), sizeof(FDirectorTrackCut), Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC() { return 2304236997U; }
	void UInterpTrackDirector::StaticRegisterNativesUInterpTrackDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister()
	{
		return UInterpTrackDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCamera;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateCameraCutsOnClients_MetaData[];
#endif
		static void NewProp_bSimulateCameraCutsOnClients_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateCameraCutsOnClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CutTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Director Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "The camera actor which the track is currently focused on. Only valid if this track or it's group is selected" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackDirector, PreviewCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData[] = {
		{ "Category", "InterpTrackDirector" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "True to allow clients to simulate their own camera cuts.  Can help with latency-induced timing issues." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_SetBit(void* Obj)
	{
		((UInterpTrackDirector*)Obj)->bSimulateCameraCutsOnClients = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulateCameraCutsOnClients", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackDirector), &Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Array of cuts between cameras." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack = { UE4CodeGen_Private::EPropertyClass::Array, "CutTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackDirector, CutTrack), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CutTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDirectorTrackCut, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackDirector_Statics::ClassParams = {
		&UInterpTrackDirector::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackDirector, 434953659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackDirector(Z_Construct_UClass_UInterpTrackDirector, &UInterpTrackDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
