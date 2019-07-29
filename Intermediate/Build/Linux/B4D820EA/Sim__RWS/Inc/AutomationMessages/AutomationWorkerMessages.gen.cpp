// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationMessages/Public/AutomationWorkerMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages() {}
// Cross Module References
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse();
	UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
// End Cross Module References
class UScriptStruct* FAutomationWorkerPerformanceDataResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataResponse"), sizeof(FAutomationWorkerPerformanceDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPerformanceDataResponse(FAutomationWorkerPerformanceDataResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPerformanceDataResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPerformanceDataResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse;
	struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to PerformanceDataRequest." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FAutomationWorkerPerformanceDataResponse*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerPerformanceDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPerformanceDataResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerPerformanceDataResponse),
		alignof(FAutomationWorkerPerformanceDataResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPerformanceDataResponse"), sizeof(FAutomationWorkerPerformanceDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC() { return 3237079284U; }
class UScriptStruct* FAutomationWorkerPerformanceDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataRequest"), sizeof(FAutomationWorkerPerformanceDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPerformanceDataRequest(FAutomationWorkerPerformanceDataRequest::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPerformanceDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPerformanceDataRequest")),new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest;
	struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataPoints;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DataPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the performance data for this hardware." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints = { UE4CodeGen_Private::EPropertyClass::Array, "DataPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, DataPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData)) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Double, "DataPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware = { UE4CodeGen_Private::EPropertyClass::Str, "Hardware", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Hardware), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPerformanceDataRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerPerformanceDataRequest),
		alignof(FAutomationWorkerPerformanceDataRequest),
		Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPerformanceDataRequest"), sizeof(FAutomationWorkerPerformanceDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC() { return 3101119084U; }
class UScriptStruct* FAutomationWorkerTestDataResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataResponse"), sizeof(FAutomationWorkerTestDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerTestDataResponse(FAutomationWorkerTestDataResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerTestDataResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerTestDataResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse;
	struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNew_MetaData[];
#endif
		static void NewProp_bIsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to TestDataRequests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit(void* Obj)
	{
		((FAutomationWorkerTestDataResponse*)Obj)->bIsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNew", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerTestDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData = { UE4CodeGen_Private::EPropertyClass::Str, "JsonData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataResponse, JsonData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTestDataResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerTestDataResponse),
		alignof(FAutomationWorkerTestDataResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerTestDataResponse"), sizeof(FAutomationWorkerTestDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC() { return 633402363U; }
class UScriptStruct* FAutomationWorkerTestDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataRequest"), sizeof(FAutomationWorkerTestDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerTestDataRequest(FAutomationWorkerTestDataRequest::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerTestDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerTestDataRequest")),new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest;
	struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataTestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that handles both storing and requesting ground truth data.\nfor the first time this test is run, it might need to store things, or get things." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData = { UE4CodeGen_Private::EPropertyClass::Str, "JsonData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, JsonData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName = { UE4CodeGen_Private::EPropertyClass::Str, "DataName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName = { UE4CodeGen_Private::EPropertyClass::Str, "DataTestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataTestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform = { UE4CodeGen_Private::EPropertyClass::Str, "DataPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The category of the data, this is purely to bucket and separate the ground truth data we store into different directories." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType = { UE4CodeGen_Private::EPropertyClass::Str, "DataType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTestDataRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerTestDataRequest),
		alignof(FAutomationWorkerTestDataRequest),
		Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerTestDataRequest"), sizeof(FAutomationWorkerTestDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC() { return 2391247466U; }
class UScriptStruct* FAutomationWorkerImageComparisonResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerImageComparisonResults(FAutomationWorkerImageComparisonResults::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerImageComparisonResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerImageComparisonResults")),new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults;
	struct Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimilar_MetaData[];
#endif
		static void NewProp_bSimilar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimilar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNew_MetaData[];
#endif
		static void NewProp_bNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "GlobalDifference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, GlobalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "MaxLocalDifference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, MaxLocalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Were the images similar?  If they're not you should log an error." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit(void* Obj)
	{
		((FAutomationWorkerImageComparisonResults*)Obj)->bSimilar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimilar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Was this a new image we've never seen before and have no ground truth for?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit(void* Obj)
	{
		((FAutomationWorkerImageComparisonResults*)Obj)->bNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew = { UE4CodeGen_Private::EPropertyClass::Bool, "bNew", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The unique id for the comparison." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerImageComparisonResults",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerImageComparisonResults),
		alignof(FAutomationWorkerImageComparisonResults),
		Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC() { return 1824861228U; }
class UScriptStruct* FAutomationWorkerScreenImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerScreenImage(FAutomationWorkerScreenImage::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerScreenImage"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerScreenImage")),new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage;
	struct Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenShotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScreenImage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenImage_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Struct, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, Metadata), Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName = { UE4CodeGen_Private::EPropertyClass::Str, "ScreenShotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage = { UE4CodeGen_Private::EPropertyClass::Array, "ScreenImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ScreenImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerScreenImage",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerScreenImage),
		alignof(FAutomationWorkerScreenImage),
		Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC() { return 3863349506U; }
class UScriptStruct* FAutomationScreenshotMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationScreenshotMetadata(FAutomationScreenshotMetadata::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationScreenshotMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationScreenshotMetadata")),new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata;
	struct Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[];
#endif
		static void NewProp_bIgnoreColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_bIgnoreAntiAliasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceMaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceMaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceMinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceMinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasComparisonRules_MetaData[];
#endif
		static void NewProp_bHasComparisonRules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasComparisonRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoliageQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectsQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostProcessQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterUserDriverVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterUserDriverVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterInternalDriverVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterInternalDriverVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vendor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Vendor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStereo_MetaData[];
#endif
		static void NewProp_bIsStereo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStereo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FeatureLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rhi_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Rhi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Commit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIgnoreColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIgnoreAntiAliasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreAntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumGlobalError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumLocalError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceMaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceMinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceAlpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceBlue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceBlue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceGreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceGreen), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceRed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceRed), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Comparison Requests" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bHasComparisonRules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasComparisonRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality = { UE4CodeGen_Private::EPropertyClass::Int, "FoliageQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FoliageQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality = { UE4CodeGen_Private::EPropertyClass::Int, "EffectsQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, EffectsQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality = { UE4CodeGen_Private::EPropertyClass::Int, "TextureQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, TextureQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality = { UE4CodeGen_Private::EPropertyClass::Int, "PostProcessQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, PostProcessQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ShadowQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadowQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality = { UE4CodeGen_Private::EPropertyClass::Int, "AntiAliasingQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AntiAliasingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ViewDistanceQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ViewDistanceQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Quality Levels" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "ResolutionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ResolutionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId = { UE4CodeGen_Private::EPropertyClass::Str, "UniqueDeviceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, UniqueDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterUserDriverVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterUserDriverVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterInternalDriverVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterInternalDriverVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Hardware Details" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor = { UE4CodeGen_Private::EPropertyClass::Str, "Vendor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Vendor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIsStereo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStereo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel = { UE4CodeGen_Private::EPropertyClass::Str, "FeatureLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FeatureLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "RHI Details" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi = { UE4CodeGen_Private::EPropertyClass::Str, "Rhi", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Rhi), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit = { UE4CodeGen_Private::EPropertyClass::Str, "Commit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Commit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes = { UE4CodeGen_Private::EPropertyClass::Str, "Notes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Notes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Str, "Context", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationScreenshotMetadata",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationScreenshotMetadata),
		alignof(FAutomationScreenshotMetadata),
		Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC() { return 2887491065U; }
class UScriptStruct* FAutomationWorkerNextNetworkCommandReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply(FAutomationWorkerNextNetworkCommandReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerNextNetworkCommandReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerNextNetworkCommandReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply;
	struct Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerNextNetworkCommandReply",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerNextNetworkCommandReply),
		alignof(FAutomationWorkerNextNetworkCommandReply),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC() { return 3688912776U; }
class UScriptStruct* FAutomationWorkerRequestNextNetworkCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand(FAutomationWorkerRequestNextNetworkCommand::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestNextNetworkCommand"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestNextNetworkCommand")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand;
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestNextNetworkCommand, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestNextNetworkCommand",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerRequestNextNetworkCommand),
		alignof(FAutomationWorkerRequestNextNetworkCommand),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC() { return 3099198026U; }
class UScriptStruct* FAutomationWorkerRunTestsReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTestsReply(FAutomationWorkerRunTestsReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTestsReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTestsReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply;
	struct Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarningTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerRunTests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FAutomationWorkerRunTestsReply*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success = { UE4CodeGen_Private::EPropertyClass::Bool, "Success", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRunTestsReply), &Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal = { UE4CodeGen_Private::EPropertyClass::Int, "ErrorTotal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ErrorTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal = { UE4CodeGen_Private::EPropertyClass::Int, "WarningTotal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, WarningTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries = { UE4CodeGen_Private::EPropertyClass::Array, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Entries), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRunTestsReply",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerRunTestsReply),
		alignof(FAutomationWorkerRunTestsReply),
		Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC() { return 3644340753U; }
class UScriptStruct* FAutomationWorkerRunTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTests(FAutomationWorkerRunTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests;
	struct Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendAnalytics_MetaData[];
#endif
		static void NewProp_bSendAnalytics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendAnalytics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeautifiedTestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeautifiedTestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the running of automation tests on a worker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "If true, send results to analytics when complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit(void* Obj)
	{
		((FAutomationWorkerRunTests*)Obj)->bSendAnalytics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics = { UE4CodeGen_Private::EPropertyClass::Bool, "bSendAnalytics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRunTests), &Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName = { UE4CodeGen_Private::EPropertyClass::Str, "BeautifiedTestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, BeautifiedTestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RoleIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, RoleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRunTests",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerRunTests),
		alignof(FAutomationWorkerRunTests),
		Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC() { return 2185197722U; }
class UScriptStruct* FAutomationWorkerRequestTestsReplyComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete(FAutomationWorkerRequestTestsReplyComplete::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTestsReplyComplete"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTestsReplyComplete")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete;
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Returns list of all tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests = { UE4CodeGen_Private::EPropertyClass::Array, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTestsReplyComplete, Tests), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestTestsReplyComplete",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerRequestTestsReplyComplete),
		alignof(FAutomationWorkerRequestTestsReplyComplete),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC() { return 2530304268U; }
class UScriptStruct* FAutomationWorkerSingleTestReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerSingleTestReply"), sizeof(FAutomationWorkerSingleTestReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerSingleTestReply(FAutomationWorkerSingleTestReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerSingleTestReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerSingleTestReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply;
	struct Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumParticipantsRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumParticipantsRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TestFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceFileLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "A single test reply, used by FAutomationWorkerRequestTestsReplyComplete" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumParticipantsRequired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, NumParticipantsRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags = { UE4CodeGen_Private::EPropertyClass::UInt32, "TestFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand = { UE4CodeGen_Private::EPropertyClass::Str, "OpenCommand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, OpenCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath = { UE4CodeGen_Private::EPropertyClass::Str, "AssetPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine = { UE4CodeGen_Private::EPropertyClass::Int, "SourceFileLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFileLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter = { UE4CodeGen_Private::EPropertyClass::Str, "TestParameter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath = { UE4CodeGen_Private::EPropertyClass::Str, "FullTestPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, FullTestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerSingleTestReply",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerSingleTestReply),
		alignof(FAutomationWorkerSingleTestReply),
		Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerSingleTestReply"), sizeof(FAutomationWorkerSingleTestReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC() { return 1481731167U; }
class UScriptStruct* FAutomationWorkerRequestTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTests(FAutomationWorkerRequestTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests;
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedTestFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RequestedTestFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperDirectoryIncluded_MetaData[];
#endif
		static void NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeveloperDirectoryIncluded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message for requesting available automation tests from a worker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating which tests we'd like to request." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags = { UE4CodeGen_Private::EPropertyClass::UInt32, "RequestedTestFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTests, RequestedTestFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the developer directory should be included." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj)
	{
		((FAutomationWorkerRequestTests*)Obj)->DeveloperDirectoryIncluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded = { UE4CodeGen_Private::EPropertyClass::Bool, "DeveloperDirectoryIncluded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRequestTests), &Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestTests",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerRequestTests),
		alignof(FAutomationWorkerRequestTests),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC() { return 3182998059U; }
class UScriptStruct* FAutomationWorkerPong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPong, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPong(FAutomationWorkerPong::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPong"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPong")),new UScriptStruct::TCppStructOps<FAutomationWorkerPong>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong;
	struct Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPong>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPong",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerPong),
		alignof(FAutomationWorkerPong),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC() { return 1878595515U; }
class UScriptStruct* FAutomationWorkerStopTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerStopTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStopTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerStopTests"), sizeof(FAutomationWorkerStopTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerStopTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerStopTests(FAutomationWorkerStopTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerStopTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerStopTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerStopTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerStopTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerStopTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerStopTests;
	struct Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerStopTests>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerStopTests",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerStopTests),
		alignof(FAutomationWorkerStopTests),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerStopTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerStopTests"), sizeof(FAutomationWorkerStopTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerStopTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerStopTests_CRC() { return 364145436U; }
class UScriptStruct* FAutomationWorkerResetTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerResetTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerResetTests(FAutomationWorkerResetTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerResetTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerResetTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests;
	struct Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerResetTests",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerResetTests),
		alignof(FAutomationWorkerResetTests),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC() { return 2238618341U; }
class UScriptStruct* FAutomationWorkerPing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPing, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPing(FAutomationWorkerPing::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPing"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPing")),new UScriptStruct::TCppStructOps<FAutomationWorkerPing>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing;
	struct Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPing>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPing",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerPing),
		alignof(FAutomationWorkerPing),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC() { return 2853522719U; }
class UScriptStruct* FAutomationWorkerWorkerOffline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerWorkerOffline(FAutomationWorkerWorkerOffline::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerWorkerOffline"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerWorkerOffline")),new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline;
	struct Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that notifies automation controllers that a worker went off-line." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerWorkerOffline",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerWorkerOffline),
		alignof(FAutomationWorkerWorkerOffline),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC() { return 1660894167U; }
class UScriptStruct* FAutomationWorkerFindWorkersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkersResponse(FAutomationWorkerFindWorkersResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkersResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse;
	struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderModeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderModeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUModelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUModelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OSVersionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OSVersionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerFindWorkers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the worker's application session identifier." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the current render mode." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName = { UE4CodeGen_Private::EPropertyClass::Str, "RenderModeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RenderModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the amount of RAM this device has in gigabytes." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB = { UE4CodeGen_Private::EPropertyClass::UInt32, "RAMInGB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RAMInGB), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the CPU model." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName = { UE4CodeGen_Private::EPropertyClass::Str, "CPUModelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, CPUModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the GPU." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName = { UE4CodeGen_Private::EPropertyClass::Str, "GPUName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, GPUName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device model." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName = { UE4CodeGen_Private::EPropertyClass::Str, "ModelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, ModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the operating system version." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName = { UE4CodeGen_Private::EPropertyClass::Str, "OSVersionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, OSVersionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the platform that the worker is running on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the worker's application instance." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device that the worker is running on." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerFindWorkersResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerFindWorkersResponse),
		alignof(FAutomationWorkerFindWorkersResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC() { return 4047751180U; }
class UScriptStruct* FAutomationWorkerFindWorkers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkers(FAutomationWorkerFindWorkers::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkers"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkers")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers;
	struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Changelist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is published to find automation workers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the session identifier to find workers for." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the process." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName = { UE4CodeGen_Private::EPropertyClass::Str, "ProcessName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, ProcessName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the game." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName = { UE4CodeGen_Private::EPropertyClass::Str, "GameName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, GameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the change list number to find workers for." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist = { UE4CodeGen_Private::EPropertyClass::Int, "Changelist", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerFindWorkers",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationWorkerFindWorkers),
		alignof(FAutomationWorkerFindWorkers),
		Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC() { return 1388157007U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
