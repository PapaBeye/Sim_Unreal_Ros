// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/BlueprintPlatformLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPlatformLibrary() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenOrientation();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EApplicationState();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> inScreenOrientation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inScreenOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::NewProp_inScreenOrientation = { UE4CodeGen_Private::EPropertyClass::Byte, "inScreenOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms, inScreenOrientation), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::NewProp_inScreenOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformScreenOrientationChangedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms
		{
			FString inString;
			int32 inInt;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAppState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inInt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState = { UE4CodeGen_Private::EPropertyClass::Byte, "inAppState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inInt = { UE4CodeGen_Private::EPropertyClass::Int, "inInt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformReceivedLocalNotificationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms
		{
			FString inString;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAppState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState = { UE4CodeGen_Private::EPropertyClass::Byte, "inAppState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inAppState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms
		{
			FString inString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms
		{
			int32 inInt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::NewProp_inInt = { UE4CodeGen_Private::EPropertyClass::Int, "inInt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::NewProp_inInt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms
		{
			TArray<uint8> inArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray = { UE4CodeGen_Private::EPropertyClass::Array, "inArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms, inArray), METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "inArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::NewProp_inArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics
	{
		struct PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments = { UE4CodeGen_Private::EPropertyClass::Array, "StartupArguments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms, StartupArguments), METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StartupArguments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformStartupArgumentsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(PlatformGameInstance_eventPlatformStartupArgumentsDelegate_Parms), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EApplicationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EApplicationState, Z_Construct_UPackage__Script_Engine(), TEXT("EApplicationState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EApplicationState(EApplicationState_StaticEnum, TEXT("/Script/Engine"), TEXT("EApplicationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EApplicationState_CRC() { return 3603925834U; }
	UEnum* Z_Construct_UEnum_Engine_EApplicationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EApplicationState"), 0, Get_Z_Construct_UEnum_Engine_EApplicationState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EApplicationState::Unknown", (int64)EApplicationState::Unknown },
				{ "EApplicationState::Inactive", (int64)EApplicationState::Inactive },
				{ "EApplicationState::Background", (int64)EApplicationState::Background },
				{ "EApplicationState::Active", (int64)EApplicationState::Active },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.ToolTip", "The Application was active when receiving the notification" },
				{ "Background.ToolTip", "The Application was in the background when receiving the notification" },
				{ "BlueprintType", "true" },
				{ "Inactive.ToolTip", "The Application was inactive when receiving the notification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "application state when the game receives a notification" },
				{ "Unknown.ToolTip", "The Application was in an unknown state when receiving the notification" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EApplicationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EApplicationState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EScreenOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EScreenOrientation, Z_Construct_UPackage__Script_Engine(), TEXT("EScreenOrientation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScreenOrientation(EScreenOrientation_StaticEnum, TEXT("/Script/Engine"), TEXT("EScreenOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EScreenOrientation_CRC() { return 792872270U; }
	UEnum* Z_Construct_UEnum_Engine_EScreenOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScreenOrientation"), 0, Get_Z_Construct_UEnum_Engine_EScreenOrientation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScreenOrientation::Unknown", (int64)EScreenOrientation::Unknown },
				{ "EScreenOrientation::Portrait", (int64)EScreenOrientation::Portrait },
				{ "EScreenOrientation::PortraitUpsideDown", (int64)EScreenOrientation::PortraitUpsideDown },
				{ "EScreenOrientation::LandscapeLeft", (int64)EScreenOrientation::LandscapeLeft },
				{ "EScreenOrientation::LandscapeRight", (int64)EScreenOrientation::LandscapeRight },
				{ "EScreenOrientation::FaceUp", (int64)EScreenOrientation::FaceUp },
				{ "EScreenOrientation::FaceDown", (int64)EScreenOrientation::FaceDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FaceDown.ToolTip", "The orientation is as if place on a desk with the screen downward" },
				{ "FaceUp.ToolTip", "The orientation is as if place on a desk with the screen upward" },
				{ "LandscapeLeft.ToolTip", "The orientation is landscape with the home button at the right side" },
				{ "LandscapeRight.ToolTip", "The orientation is landscape with the home button at the left side" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "Portrait.ToolTip", "The orientation is portrait with the home button at the bottom" },
				{ "PortraitUpsideDown.ToolTip", "The orientation is portrait with the home button at the top" },
				{ "ToolTip", "The list of possible device/screen orientation for mobile devices" },
				{ "Unknown.ToolTip", "The orientation is not known" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EScreenOrientation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EScreenOrientation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPlatformGameInstance::StaticRegisterNativesUPlatformGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister()
	{
		return UPlatformGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedLocalNotificationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedRemoteNotificationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForUserNotificationsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForRemoteNotificationsDelegate;
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
	UObject* (*const Z_Construct_UClass_UPlatformGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, "PlatformDelegate__DelegateSignature" }, // 896756891
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature" }, // 2567071041
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, "PlatformReceivedLocalNotificationDelegate__DelegateSignature" }, // 3057362990
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature" }, // 4142422468
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature" }, // 4279933958
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature" }, // 3578655776
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, "PlatformScreenOrientationChangedDelegate__DelegateSignature" }, // 1808875627
		{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature, "PlatformStartupArgumentsDelegate__DelegateSignature" }, // 4238728989
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mobile" },
		{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "UObject based class for handling mobile events. Having this object as an option gives the app lifetime access to these global delegates. The component UApplicationLifecycleComponent is destroyed at level loads" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a screen orientation change notification" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedScreenOrientationChangedNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedScreenOrientationChangedNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a local notification" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedLocalNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedLocalNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application receives a remote notification" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedRemoteNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedRemoteNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the application fails to register for remote notifications" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationFailedToRegisterForRemoteNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationFailedToRegisterForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the user grants permission to register for notifications" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationRegisteredForUserNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForUserNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "called when the user grants permission to register for remote notifications" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationRegisteredForRemoteNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedStartupArgumentsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedStartupArgumentsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformStartupArgumentsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationShouldUnloadResourcesDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationShouldUnloadResourcesDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillTerminateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasEnteredForegroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillEnterBackgroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasReactivatedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillDeactivateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedLocalNotificationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedRemoteNotificationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForUserNotificationsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationRegisteredForRemoteNotificationsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillTerminateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasEnteredForegroundDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillEnterBackgroundDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationHasReactivatedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformGameInstance_Statics::NewProp_ApplicationWillDeactivateDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformGameInstance_Statics::ClassParams = {
		&UPlatformGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlatformGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformGameInstance, 2084015654);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformGameInstance(Z_Construct_UClass_UPlatformGameInstance, &UPlatformGameInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformGameInstance);
	void UBlueprintPlatformLibrary::StaticRegisterNativesUBlueprintPlatformLibrary()
	{
		UClass* Class = UBlueprintPlatformLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelLocalNotification", &UBlueprintPlatformLibrary::execCancelLocalNotification },
			{ "ClearAllLocalNotifications", &UBlueprintPlatformLibrary::execClearAllLocalNotifications },
			{ "GetDeviceOrientation", &UBlueprintPlatformLibrary::execGetDeviceOrientation },
			{ "GetLaunchNotification", &UBlueprintPlatformLibrary::execGetLaunchNotification },
			{ "ScheduleLocalNotificationAtTime", &UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime },
			{ "ScheduleLocalNotificationBadgeAtTime", &UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime },
			{ "ScheduleLocalNotificationBadgeFromNow", &UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow },
			{ "ScheduleLocalNotificationFromNow", &UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics
	{
		struct BlueprintPlatformLibrary_eventCancelLocalNotification_Parms
		{
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventCancelLocalNotification_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::NewProp_ActivationEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Cancel a local notification given the ActivationEvent\n@param ActivationEvent The string passed into the Schedule call for the notification to be cancelled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "CancelLocalNotification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BlueprintPlatformLibrary_eventCancelLocalNotification_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Clear all pending local notifications. Typically this will be done before scheduling new notifications when going into the background" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ClearAllLocalNotifications", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics
	{
		struct BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms, ReturnValue), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "@return the current device orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "GetDeviceOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintPlatformLibrary_eventGetDeviceOrientation_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics
	{
		struct BlueprintPlatformLibrary_eventGetLaunchNotification_Parms
		{
			bool NotificationLaunchedApp;
			FString ActivationEvent;
			int32 FireDate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireDate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static void NewProp_NotificationLaunchedApp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotificationLaunchedApp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_FireDate = { UE4CodeGen_Private::EPropertyClass::Int, "FireDate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, FireDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, ActivationEvent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventGetLaunchNotification_Parms*)Obj)->NotificationLaunchedApp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp = { UE4CodeGen_Private::EPropertyClass::Bool, "NotificationLaunchedApp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_FireDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_ActivationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::NewProp_NotificationLaunchedApp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Get the local notification that was used to launch the app\n@param NotificationLaunchedApp Return true if a notification was used to launch the app\n@param ActivationEvent Returns the name of the ActivationEvent if a notification was used to launch the app\n@param FireDate Returns the time the notification was activated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "GetLaunchNotification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static void NewProp_LocalTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Text, "Action", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Text, "Body", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title_MetaData)) };
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms*)Obj)->LocalTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime = { UE4CodeGen_Private::EPropertyClass::Bool, "LocalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "FireDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_ActivationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_LocalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::NewProp_FireDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationAtTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static void NewProp_LocalTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent_MetaData)) };
	void Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime_SetBit(void* Obj)
	{
		((BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms*)Obj)->LocalTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime = { UE4CodeGen_Private::EPropertyClass::Bool, "LocalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "FireDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_ActivationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_LocalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::NewProp_FireDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification badge at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationBadgeAtTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms
		{
			int32 inSecondsFromNow;
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_inSecondsFromNow = { UE4CodeGen_Private::EPropertyClass::Int, "inSecondsFromNow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_ActivationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::NewProp_inSecondsFromNow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification badge to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationBadgeFromNow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms
		{
			int32 inSecondsFromNow;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, ActivationEvent), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Text, "Action", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Text, "Body", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_inSecondsFromNow = { UE4CodeGen_Private::EPropertyClass::Int, "inSecondsFromNow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_ActivationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::NewProp_inSecondsFromNow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform|LocalNotification" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ToolTip", "Schedule a local notification to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationFromNow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms), Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister()
	{
		return UBlueprintPlatformLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification, "CancelLocalNotification" }, // 3638432650
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications, "ClearAllLocalNotifications" }, // 2004129124
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetDeviceOrientation, "GetDeviceOrientation" }, // 3660693727
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification, "GetLaunchNotification" }, // 3024448317
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime, "ScheduleLocalNotificationAtTime" }, // 3673907094
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime, "ScheduleLocalNotificationBadgeAtTime" }, // 428920645
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow, "ScheduleLocalNotificationBadgeFromNow" }, // 168308016
		{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow, "ScheduleLocalNotificationFromNow" }, // 1579854180
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
		{ "ScriptName", "PlatformLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPlatformLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::ClassParams = {
		&UBlueprintPlatformLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintPlatformLibrary, 2835525069);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPlatformLibrary(Z_Construct_UClass_UBlueprintPlatformLibrary, &UBlueprintPlatformLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintPlatformLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPlatformLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
