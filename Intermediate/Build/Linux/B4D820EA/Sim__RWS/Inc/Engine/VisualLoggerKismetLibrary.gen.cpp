// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerKismetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText();
	ENGINE_API UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog();
// End Cross Module References
	void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary()
	{
		UClass* Class = UVisualLoggerKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableRecording", &UVisualLoggerKismetLibrary::execEnableRecording },
			{ "LogBox", &UVisualLoggerKismetLibrary::execLogBox },
			{ "LogLocation", &UVisualLoggerKismetLibrary::execLogLocation },
			{ "LogSegment", &UVisualLoggerKismetLibrary::execLogSegment },
			{ "LogText", &UVisualLoggerKismetLibrary::execLogText },
			{ "RedirectVislog", &UVisualLoggerKismetLibrary::execRedirectVislog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics
	{
		struct VisualLoggerKismetLibrary_eventEnableRecording_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventEnableRecording_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Enable VisLog Recording" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "EnableRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogBox_Parms
		{
			UObject* WorldContextObject;
			FBox BoxShape;
			FString Text;
			FLinearColor ObjectColor;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxShape;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogBox_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToMessageLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Box Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs box shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FString Text;
			FLinearColor ObjectColor;
			float Radius;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogLocation_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToMessageLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Location" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogSegment_Parms
		{
			UObject* WorldContextObject;
			FVector SegmentStart;
			FVector SegmentEnd;
			FString Text;
			FLinearColor ObjectColor;
			float Thickness;
			FName CategoryName;
			bool bAddToMessageLog;
		};
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogSegment_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToMessageLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Name, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Text), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Segment" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogSegment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogText_Parms
		{
			UObject* WorldContextObject;
			FString Text;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogText_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddToMessageLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory = { UE4CodeGen_Private::EPropertyClass::Name, "LogCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Text" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "LogText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics
	{
		struct VisualLoggerKismetLibrary_eventRedirectVislog_Parms
		{
			UObject* SourceOwner;
			UObject* DestinationOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner = { UE4CodeGen_Private::EPropertyClass::Object, "DestinationOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, DestinationOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner = { UE4CodeGen_Private::EPropertyClass::Object, "SourceOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, SourceOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Makes SourceOwner log to DestinationOwner's vislog" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, "RedirectVislog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VisualLoggerKismetLibrary_eventRedirectVislog_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording, "EnableRecording" }, // 691547073
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox, "LogBox" }, // 3412322967
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation, "LogLocation" }, // 53965247
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment, "LogSegment" }, // 763028520
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText, "LogText" }, // 1180463233
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog, "RedirectVislog" }, // 305635883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ScriptName", "VisualLoggerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerKismetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams = {
		&UVisualLoggerKismetLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualLoggerKismetLibrary, 4104176784);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerKismetLibrary(Z_Construct_UClass_UVisualLoggerKismetLibrary, &UVisualLoggerKismetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerKismetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerKismetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
