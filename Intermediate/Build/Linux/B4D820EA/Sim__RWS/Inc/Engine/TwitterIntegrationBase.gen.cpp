// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TwitterIntegrationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitterIntegrationBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_Init();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI();
	ENGINE_API UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest();
// End Cross Module References
	static UEnum* ETwitterIntegrationDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterIntegrationDelegate"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwitterIntegrationDelegate(ETwitterIntegrationDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("ETwitterIntegrationDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_CRC() { return 53468640U; }
	UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwitterIntegrationDelegate"), 0, Get_Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TID_AuthorizeComplete", (int64)TID_AuthorizeComplete },
				{ "TID_TweetUIComplete", (int64)TID_TweetUIComplete },
				{ "TID_RequestComplete", (int64)TID_RequestComplete },
				{ "TID_MAX", (int64)TID_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETwitterIntegrationDelegate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETwitterIntegrationDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETwitterRequestMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterRequestMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterRequestMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwitterRequestMethod(ETwitterRequestMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ETwitterRequestMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETwitterRequestMethod_CRC() { return 2701312565U; }
	UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwitterRequestMethod"), 0, Get_Z_Construct_UEnum_Engine_ETwitterRequestMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRM_Get", (int64)TRM_Get },
				{ "TRM_Post", (int64)TRM_Post },
				{ "TRM_Delete", (int64)TRM_Delete },
				{ "TRM_MAX", (int64)TRM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
				{ "ToolTip", "The possible twitter request methods" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETwitterRequestMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETwitterRequestMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase()
	{
		UClass* Class = UTwitterIntegrationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthorizeAccounts", &UTwitterIntegrationBase::execAuthorizeAccounts },
			{ "CanShowTweetUI", &UTwitterIntegrationBase::execCanShowTweetUI },
			{ "GetAccountName", &UTwitterIntegrationBase::execGetAccountName },
			{ "GetNumAccounts", &UTwitterIntegrationBase::execGetNumAccounts },
			{ "Init", &UTwitterIntegrationBase::execInit },
			{ "ShowTweetUI", &UTwitterIntegrationBase::execShowTweetUI },
			{ "TwitterRequest", &UTwitterIntegrationBase::execTwitterRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics
	{
		struct TwitterIntegrationBase_eventAuthorizeAccounts_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventAuthorizeAccounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventAuthorizeAccounts_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Starts the process of authorizing the local user(s). When TID_AuthorizeComplete is called, then GetNumAccounts()\nwill return a valid number of accounts\n\n@return true if the authorization process started, and TID_AuthorizeComplete delegates will be called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "AuthorizeAccounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventAuthorizeAccounts_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics
	{
		struct TwitterIntegrationBase_eventCanShowTweetUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventCanShowTweetUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventCanShowTweetUI_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return true if the user is allowed to use the Tweet UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "CanShowTweetUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventCanShowTweetUI_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics
	{
		struct TwitterIntegrationBase_eventGetAccountName_Parms
		{
			int32 AccountIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AccountIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_AccountIndex = { UE4CodeGen_Private::EPropertyClass::Int, "AccountIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_AccountIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return the display name of the given Twitter account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "GetAccountName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventGetAccountName_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics
	{
		struct TwitterIntegrationBase_eventGetNumAccounts_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetNumAccounts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return The number of accounts that were authorized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "GetNumAccounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventGetNumAccounts_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Perform any needed initialization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics
	{
		struct TwitterIntegrationBase_eventShowTweetUI_Parms
		{
			FString InitialMessage;
			FString URL;
			FString Picture;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Picture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Picture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventShowTweetUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventShowTweetUI_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture = { UE4CodeGen_Private::EPropertyClass::Str, "Picture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, Picture), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage = { UE4CodeGen_Private::EPropertyClass::Str, "InitialMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, InitialMessage), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Kicks off a tweet, using the platform to show the UI. If this returns false, or you are on a platform that doesn't support the UI,\nyou can use the TwitterRequest method to perform a manual tweet using the Twitter API\n\n@param InitialMessage [optional] Initial message to show\n@param URL [optional] URL to attach to the tweet\n@param Picture [optional] Name of a picture (stored locally, platform subclass will do the searching for it) to add to the tweet\n\n@return true if a UI was displayed for the user to interact with, and a TID_TweetUIComplete will be sent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "ShowTweetUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(TwitterIntegrationBase_eventShowTweetUI_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics
	{
		struct TwitterIntegrationBase_eventTwitterRequest_Parms
		{
			FString URL;
			TArray<FString> ParamKeysAndValues;
			TEnumAsByte<ETwitterRequestMethod> RequestMethod;
			int32 AccountIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AccountIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamKeysAndValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamKeysAndValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamKeysAndValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventTwitterRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TwitterIntegrationBase_eventTwitterRequest_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_AccountIndex = { UE4CodeGen_Private::EPropertyClass::Int, "AccountIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_RequestMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "RequestMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, RequestMethod), Z_Construct_UEnum_Engine_ETwitterRequestMethod, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues = { UE4CodeGen_Private::EPropertyClass::Array, "ParamKeysAndValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, ParamKeysAndValues), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ParamKeysAndValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_AccountIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_RequestMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Kicks off a generic twitter request\n\n@param URL The URL for the twitter request\n@param KeysAndValues The extra parameters to pass to the request (request specific). Separate keys and values: < \"key1\", \"value1\", \"key2\", \"value2\" >\n@param Method The method for this request (get, post, delete)\n@param AccountIndex A user index if an account is needed, or -1 if an account isn't needed for the request\n\n@return true the request was sent off, and a TID_RequestComplete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, "TwitterRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420400, sizeof(TwitterIntegrationBase_eventTwitterRequest_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister()
	{
		return UTwitterIntegrationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTwitterIntegrationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitterIntegrationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitterIntegrationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts, "AuthorizeAccounts" }, // 2258145685
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI, "CanShowTweetUI" }, // 600251493
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName, "GetAccountName" }, // 599402963
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts, "GetNumAccounts" }, // 2137594365
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_Init, "Init" }, // 2198740998
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI, "ShowTweetUI" }, // 2313284041
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest, "TwitterRequest" }, // 4228754288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TwitterIntegrationBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitterIntegrationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitterIntegrationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwitterIntegrationBase_Statics::ClassParams = {
		&UTwitterIntegrationBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwitterIntegrationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwitterIntegrationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwitterIntegrationBase, 3635261294);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwitterIntegrationBase(Z_Construct_UClass_UTwitterIntegrationBase, &UTwitterIntegrationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UTwitterIntegrationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitterIntegrationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
