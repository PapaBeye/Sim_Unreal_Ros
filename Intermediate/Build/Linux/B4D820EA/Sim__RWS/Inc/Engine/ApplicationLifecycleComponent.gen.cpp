// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ApplicationLifecycleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationLifecycleComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms
		{
			TArray<FString> StartupArguments;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupArguments;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartupArguments_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments = { UE4CodeGen_Private::EPropertyClass::Array, "StartupArguments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms, StartupArguments), METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StartupArguments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, "ApplicationStartupArgumentsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms
		{
			bool bInLowPowerMode;
		};
		static void NewProp_bInLowPowerMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLowPowerMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit(void* Obj)
	{
		((ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms*)Obj)->bInLowPowerMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bInLowPowerMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, "OnLowPowerModeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics
	{
		struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms
		{
			ETemperatureSeverityType Severity;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity = { UE4CodeGen_Private::EPropertyClass::Enum, "Severity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms, Severity), Z_Construct_UEnum_Engine_ETemperatureSeverityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, "OnTemperatureChangeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, "ApplicationLifetimeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETemperatureSeverityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETemperatureSeverityType, Z_Construct_UPackage__Script_Engine(), TEXT("ETemperatureSeverityType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETemperatureSeverityType(ETemperatureSeverityType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETemperatureSeverityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETemperatureSeverityType_CRC() { return 3451073910U; }
	UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETemperatureSeverityType"), 0, Get_Z_Construct_UEnum_Engine_ETemperatureSeverityType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETemperatureSeverityType::Unknown", (int64)ETemperatureSeverityType::Unknown },
				{ "ETemperatureSeverityType::Good", (int64)ETemperatureSeverityType::Good },
				{ "ETemperatureSeverityType::Bad", (int64)ETemperatureSeverityType::Bad },
				{ "ETemperatureSeverityType::Serious", (int64)ETemperatureSeverityType::Serious },
				{ "ETemperatureSeverityType::Critical", (int64)ETemperatureSeverityType::Critical },
				{ "ETemperatureSeverityType::NumSeverities", (int64)ETemperatureSeverityType::NumSeverities },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "A parallel enum to the temperature change severity enum in CoreDelegates\nNote if you change this, then you must change the one in CoreDelegates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETemperatureSeverityType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETemperatureSeverityType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UApplicationLifecycleComponent::StaticRegisterNativesUApplicationLifecycleComponent()
	{
	}
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister()
	{
		return UApplicationLifecycleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLowPowerModeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLowPowerModeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTemperatureChangeDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTemperatureChangeDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedStartupArgumentsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationShouldUnloadResourcesDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UApplicationLifecycleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, "ApplicationLifetimeDelegate__DelegateSignature" }, // 1052041820
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, "ApplicationStartupArgumentsDelegate__DelegateSignature" }, // 4013806708
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, "OnLowPowerModeDelegate__DelegateSignature" }, // 1128550050
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, "OnTemperatureChangeDelegate__DelegateSignature" }, // 1134720666
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Components/ApplicationLifecycleComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when we are in low power mode" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLowPowerModeDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, OnLowPowerModeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when temperature level has changed, and receives the severity" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTemperatureChangeDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, OnTemperatureChangeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedStartupArgumentsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationReceivedStartupArgumentsDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationShouldUnloadResourcesDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationShouldUnloadResourcesDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillTerminateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasEnteredForegroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillEnterBackgroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasReactivatedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillDeactivateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplicationLifecycleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationLifecycleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams = {
		&UApplicationLifecycleComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApplicationLifecycleComponent, 2437860574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicationLifecycleComponent(Z_Construct_UClass_UApplicationLifecycleComponent, &UApplicationLifecycleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UApplicationLifecycleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationLifecycleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
