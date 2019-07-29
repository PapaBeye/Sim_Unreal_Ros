// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProfilerMessages/Public/ProfilerServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilerServiceMessages() {}
// Cross Module References
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
	UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
// End Cross Module References
class UScriptStruct* FProfilerServiceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceRequest, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceRequest(FProfilerServiceRequest::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceRequest")),new UScriptStruct::TCppStructOps<FProfilerServiceRequest>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest;
	struct Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Request @see EProfilerRequestType." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request = { UE4CodeGen_Private::EPropertyClass::UInt32, "Request", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceRequest, Request), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceRequest),
		alignof(FProfilerServiceRequest),
		Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC() { return 2367618725U; }
class UScriptStruct* FProfilerServicePreview::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreview, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreview(FProfilerServicePreview::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreview"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreview")),new UScriptStruct::TCppStructOps<FProfilerServicePreview>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview;
	struct Z_Construct_UScriptStruct_FProfilerServicePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestedPreviewState_MetaData[];
#endif
		static void NewProp_bRequestedPreviewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestedPreviewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreview>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data preview state that should be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit(void* Obj)
	{
		((FProfilerServicePreview*)Obj)->bRequestedPreviewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequestedPreviewState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfilerServicePreview), &Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePreview",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServicePreview),
		alignof(FProfilerServicePreview),
		Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC() { return 1536052664U; }
class UScriptStruct* FProfilerServiceCapture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceCapture, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceCapture(FProfilerServiceCapture::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceCapture"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceCapture")),new UScriptStruct::TCppStructOps<FProfilerServiceCapture>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture;
	struct Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestedCaptureState_MetaData[];
#endif
		static void NewProp_bRequestedCaptureState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestedCaptureState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceCapture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data capture state that should be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit(void* Obj)
	{
		((FProfilerServiceCapture*)Obj)->bRequestedCaptureState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequestedCaptureState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfilerServiceCapture), &Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceCapture",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceCapture),
		alignof(FProfilerServiceCapture),
		Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC() { return 2171688389U; }
class UScriptStruct* FProfilerServiceUnsubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceUnsubscribe(FProfilerServiceUnsubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceUnsubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceUnsubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe;
	struct Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceUnsubscribe",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceUnsubscribe),
		alignof(FProfilerServiceUnsubscribe),
		Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC() { return 202730337U; }
class UScriptStruct* FProfilerServiceSubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceSubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceSubscribe(FProfilerServiceSubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceSubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceSubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe;
	struct Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceSubscribe",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceSubscribe),
		alignof(FProfilerServiceSubscribe),
		Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC() { return 3145108146U; }
class UScriptStruct* FProfilerServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePong, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePong(FProfilerServicePong::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePong")),new UScriptStruct::TCppStructOps<FProfilerServicePong>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong;
	struct Z_Construct_UScriptStruct_FProfilerServicePong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePong>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePong",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServicePong),
		alignof(FProfilerServicePong),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServicePong_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC() { return 2213648768U; }
class UScriptStruct* FProfilerServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePing, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePing(FProfilerServicePing::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePing")),new UScriptStruct::TCppStructOps<FProfilerServicePing>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing;
	struct Z_Construct_UScriptStruct_FProfilerServicePing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePing>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePing",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServicePing),
		alignof(FProfilerServicePing),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServicePing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC() { return 2757697499U; }
class UScriptStruct* FProfilerServiceFileChunk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceFileChunk, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceFileChunk(FProfilerServiceFileChunk::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceFileChunk"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceFileChunk")),new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk;
	struct Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChunkHash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChunkHash_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Header_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Implements a message for copying a file through the network, as well as for synchronization.\nUnfortunately assumes that InstanceId and Filename are transfered without errors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Hash of this data and header." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash = { UE4CodeGen_Private::EPropertyClass::Array, "ChunkHash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, ChunkHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ChunkHash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "FProfilerFileChunkHeader stored in the array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header = { UE4CodeGen_Private::EPropertyClass::Array, "Header", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Header), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Header", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData = { UE4CodeGen_Private::EPropertyClass::Str, "HexData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, HexData), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The file containing this file chunk." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The ID of the instance where this message should be sent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceFileChunk",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceFileChunk),
		alignof(FProfilerServiceFileChunk),
		Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC() { return 1015015315U; }
class UScriptStruct* FProfilerServicePreviewAck::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreviewAck, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreviewAck(FProfilerServicePreviewAck::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreviewAck"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreviewAck")),new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck;
	struct Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServicePreviewAck, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePreviewAck",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServicePreviewAck),
		alignof(FProfilerServicePreviewAck),
		Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC() { return 3221080245U; }
class UScriptStruct* FProfilerServiceData2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceData2, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceData2(FProfilerServiceData2::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceData2"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceData2")),new UScriptStruct::TCppStructOps<FProfilerServiceData2>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2;
	struct Z_Construct_UScriptStruct_FProfilerServiceData2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceData2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData = { UE4CodeGen_Private::EPropertyClass::Str, "HexData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, HexData), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the uncompressed data." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize = { UE4CodeGen_Private::EPropertyClass::Int, "UncompressedSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, UncompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the compressed data." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize = { UE4CodeGen_Private::EPropertyClass::Int, "CompressedSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, CompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Stats frame." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Int64, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, Frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceData2",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceData2),
		alignof(FProfilerServiceData2),
		Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC() { return 4145079783U; }
class UScriptStruct* FProfilerServiceAuthorize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceAuthorize, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceAuthorize(FProfilerServiceAuthorize::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceAuthorize"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceAuthorize")),new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize;
	struct Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service authorization message." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Session ID." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceAuthorize",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfilerServiceAuthorize),
		alignof(FProfilerServiceAuthorize),
		Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC() { return 4164795994U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
