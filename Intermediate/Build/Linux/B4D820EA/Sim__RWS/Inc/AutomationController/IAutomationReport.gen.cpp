// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationController/Public/IAutomationReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAutomationReport() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
	AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationState();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EAutomationArtifactType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType, Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationArtifactType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutomationArtifactType(EAutomationArtifactType_StaticEnum, TEXT("/Script/AutomationController"), TEXT("EAutomationArtifactType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationArtifactType_CRC() { return 4064694898U; }
	UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutomationArtifactType"), 0, Get_Z_Construct_UEnum_AutomationController_EAutomationArtifactType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutomationArtifactType::None", (int64)EAutomationArtifactType::None },
				{ "EAutomationArtifactType::Image", (int64)EAutomationArtifactType::Image },
				{ "EAutomationArtifactType::Comparison", (int64)EAutomationArtifactType::Comparison },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/IAutomationReport.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutomationController,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAutomationArtifactType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAutomationArtifactType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAutomationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationState, Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutomationState(EAutomationState_StaticEnum, TEXT("/Script/AutomationController"), TEXT("EAutomationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutomationController_EAutomationState_CRC() { return 3236190319U; }
	UEnum* Z_Construct_UEnum_AutomationController_EAutomationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutomationState"), 0, Get_Z_Construct_UEnum_AutomationController_EAutomationState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutomationState::NotRun", (int64)EAutomationState::NotRun },
				{ "EAutomationState::InProcess", (int64)EAutomationState::InProcess },
				{ "EAutomationState::Fail", (int64)EAutomationState::Fail },
				{ "EAutomationState::Success", (int64)EAutomationState::Success },
				{ "EAutomationState::NotEnoughParticipants", (int64)EAutomationState::NotEnoughParticipants },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fail.ToolTip", "Automation test is running now" },
				{ "InProcess.ToolTip", "Automation test was not run" },
				{ "ModuleRelativePath", "Public/IAutomationReport.h" },
				{ "NotEnoughParticipants.ToolTip", "Automation test was run and succeeded" },
				{ "Success.ToolTip", "Automation test was run and failed" },
				{ "ToolTip", "Enumeration of unit test status for special dialog" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutomationController,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAutomationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAutomationState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAutomationArtifact::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationArtifact, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationArtifact"), sizeof(FAutomationArtifact), Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationArtifact(FAutomationArtifact::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomationArtifact"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationArtifact")),new UScriptStruct::TCppStructOps<FAutomationArtifact>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomationArtifact;
	struct Z_Construct_UScriptStruct_FAutomationArtifact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationArtifact>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files = { UE4CodeGen_Private::EPropertyClass::Map, "Files", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationArtifact, Files), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Files_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Files", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationArtifact, Type), Z_Construct_UEnum_AutomationController_EAutomationArtifactType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationArtifact, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationArtifact, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomationArtifact",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAutomationArtifact),
		alignof(FAutomationArtifact),
		Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationArtifact"), sizeof(FAutomationArtifact), Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationArtifact_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationArtifact_CRC() { return 2730058128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
