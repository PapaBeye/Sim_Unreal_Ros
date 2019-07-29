// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ProfilingDebugging/HealthSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthSnapshot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot();
	ENGINE_API UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots();
	ENGINE_API UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots();
// End Cross Module References
	void UHealthSnapshotBlueprintLibrary::StaticRegisterNativesUHealthSnapshotBlueprintLibrary()
	{
		UClass* Class = UHealthSnapshotBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogPerformanceSnapshot", &UHealthSnapshotBlueprintLibrary::execLogPerformanceSnapshot },
			{ "StartPerformanceSnapshots", &UHealthSnapshotBlueprintLibrary::execStartPerformanceSnapshots },
			{ "StopPerformanceSnapshots", &UHealthSnapshotBlueprintLibrary::execStopPerformanceSnapshots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics
	{
		struct HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms
		{
			FString SnapshotTitle;
			bool bResetStats;
		};
		static void NewProp_bResetStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats_SetBit(void* Obj)
	{
		((HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms*)Obj)->bResetStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms), &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle = { UE4CodeGen_Private::EPropertyClass::Str, "SnapshotTitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms, SnapshotTitle), METADATA_PARAMS(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "CPP_Default_bResetStats", "true" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Writes a snapshot to the log. Captures memory stats by default. Also captures performance stats if called after StartHealthSnapshotChart and before SopHealthSnapshotChart.\n\n@param        SnapshotTitle                   The name to be given to the new HealthSnapshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, "LogPerformanceSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022601, sizeof(HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms), Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Begins capturing FPS charts that can be used to include performance data in a HealthSnapshot. If snapshots are already running clears all accumulated performance data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, "StartPerformanceSnapshots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Stops capturing FPS charts only if StartHealthSnapshotChart has first been called. Does nothing if FPS charts are not running. HealthSnapshots captured after this is called will not include performance stats." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, "StopPerformanceSnapshots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022601, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister()
	{
		return UHealthSnapshotBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot, "LogPerformanceSnapshot" }, // 895690671
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots, "StartPerformanceSnapshots" }, // 2709807387
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots, "StopPerformanceSnapshots" }, // 3181988213
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProfilingDebugging/HealthSnapshot.h" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthSnapshotBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::ClassParams = {
		&UHealthSnapshotBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthSnapshotBlueprintLibrary, 2295201254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthSnapshotBlueprintLibrary(Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, &UHealthSnapshotBlueprintLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UHealthSnapshotBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthSnapshotBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
