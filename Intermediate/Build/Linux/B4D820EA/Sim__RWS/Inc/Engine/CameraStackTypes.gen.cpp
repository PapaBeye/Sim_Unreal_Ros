// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraStackTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraStackTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes();
// End Cross Module References
	static UEnum* ECameraAlphaBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAlphaBlendMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraAlphaBlendMode(ECameraAlphaBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraAlphaBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_CRC() { return 64227197U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraAlphaBlendMode"), 0, Get_Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraAlphaBlendMode::CABM_Linear", (int64)ECameraAlphaBlendMode::CABM_Linear },
				{ "ECameraAlphaBlendMode::CABM_Cubic", (int64)ECameraAlphaBlendMode::CABM_Cubic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CABM_Cubic.DisplayName", "Cubic" },
				{ "CABM_Linear.DisplayName", "Linear" },
				{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECameraAlphaBlendMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECameraAlphaBlendMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDummySpacerCameraTypes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummySpacerCameraTypes, Z_Construct_UPackage__Script_Engine(), TEXT("DummySpacerCameraTypes"), sizeof(FDummySpacerCameraTypes), Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDummySpacerCameraTypes(FDummySpacerCameraTypes::StaticStruct, TEXT("/Script/Engine"), TEXT("DummySpacerCameraTypes"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes
{
	FScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DummySpacerCameraTypes")),new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDummySpacerCameraTypes;
	struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "NOTE:\nThis code is work in progress - do not use these types until this comment is removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DummySpacerCameraTypes",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDummySpacerCameraTypes),
		alignof(FDummySpacerCameraTypes),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DummySpacerCameraTypes"), sizeof(FDummySpacerCameraTypes), Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC() { return 2422058390U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
