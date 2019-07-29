// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Engine.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngine() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConsoleType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFullyLoadPackageType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPluginRedirect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStructRedirect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClassRedirect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGameNameRedirect();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenMessageString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDropNoteInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingStatus();
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetDriverDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	static UEnum* EConsoleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConsoleType, Z_Construct_UPackage__Script_Engine(), TEXT("EConsoleType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsoleType(EConsoleType_StaticEnum, TEXT("/Script/Engine"), TEXT("EConsoleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EConsoleType_CRC() { return 1793308033U; }
	UEnum* Z_Construct_UEnum_Engine_EConsoleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsoleType"), 0, Get_Z_Construct_UEnum_Engine_EConsoleType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CONSOLE_Any", (int64)CONSOLE_Any },
				{ "CONSOLE_Mobile", (int64)CONSOLE_Mobile },
				{ "CONSOLE_MAX", (int64)CONSOLE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConsoleType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EConsoleType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransitionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionType, Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionType(ETransitionType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETransitionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETransitionType_CRC() { return 1698093217U; }
	UEnum* Z_Construct_UEnum_Engine_ETransitionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionType"), 0, Get_Z_Construct_UEnum_Engine_ETransitionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TT_None", (int64)TT_None },
				{ "TT_Paused", (int64)TT_Paused },
				{ "TT_Loading", (int64)TT_Loading },
				{ "TT_Saving", (int64)TT_Saving },
				{ "TT_Connecting", (int64)TT_Connecting },
				{ "TT_Precaching", (int64)TT_Precaching },
				{ "TT_WaitingToConnect", (int64)TT_WaitingToConnect },
				{ "TT_MAX", (int64)TT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
				{ "ToolTip", "Enumerates transition types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETransitionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFullyLoadPackageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFullyLoadPackageType, Z_Construct_UPackage__Script_Engine(), TEXT("EFullyLoadPackageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFullyLoadPackageType(EFullyLoadPackageType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFullyLoadPackageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFullyLoadPackageType_CRC() { return 3163131618U; }
	UEnum* Z_Construct_UEnum_Engine_EFullyLoadPackageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFullyLoadPackageType"), 0, Get_Z_Construct_UEnum_Engine_EFullyLoadPackageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FULLYLOAD_Map", (int64)FULLYLOAD_Map },
				{ "FULLYLOAD_Game_PreLoadClass", (int64)FULLYLOAD_Game_PreLoadClass },
				{ "FULLYLOAD_Game_PostLoadClass", (int64)FULLYLOAD_Game_PostLoadClass },
				{ "FULLYLOAD_Always", (int64)FULLYLOAD_Always },
				{ "FULLYLOAD_Mutator", (int64)FULLYLOAD_Mutator },
				{ "FULLYLOAD_MAX", (int64)FULLYLOAD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FULLYLOAD_Always.ToolTip", "Fully load the package as long as the DLC is loaded." },
				{ "FULLYLOAD_Game_PostLoadClass.ToolTip", "Load the packages after the game class in Tag is loaded. Will work no matter how game is specified in UWorld::SetGameMode. Useful for modifying shipping gametypes by loading more packages (mutators, for instance)." },
				{ "FULLYLOAD_Game_PreLoadClass.ToolTip", "Load the packages before the game class in Tag is loaded. The Game name MUST be specified in the URL (game=Package.GameName). Useful for loading packages needed to load the game type (a DLC game type, for instance)." },
				{ "FULLYLOAD_Map.ToolTip", "Load the packages when the map in Tag is loaded." },
				{ "FULLYLOAD_Mutator.ToolTip", "Load the package for a mutator that is active." },
				{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
				{ "ToolTip", "Enumerates types of fully loaded packages." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFullyLoadPackageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EFullyLoadPackageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPluginRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPluginRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("PluginRedirect"), sizeof(FPluginRedirect), Get_Z_Construct_UScriptStruct_FPluginRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPluginRedirect(FPluginRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("PluginRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPluginRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFPluginRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PluginRedirect")),new UScriptStruct::TCppStructOps<FPluginRedirect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPluginRedirect;
	struct Z_Construct_UScriptStruct_FPluginRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPluginName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldPluginName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldPluginName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName = { UE4CodeGen_Private::EPropertyClass::Str, "NewPluginName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPluginRedirect, NewPluginName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName = { UE4CodeGen_Private::EPropertyClass::Str, "OldPluginName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPluginRedirect, OldPluginName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_NewPluginName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginRedirect_Statics::NewProp_OldPluginName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PluginRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPluginRedirect),
		alignof(FPluginRedirect),
		Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPluginRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PluginRedirect"), sizeof(FPluginRedirect), Get_Z_Construct_UScriptStruct_FPluginRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPluginRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPluginRedirect_CRC() { return 848900725U; }
class UScriptStruct* FStructRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStructRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("StructRedirect"), sizeof(FStructRedirect), Get_Z_Construct_UScriptStruct_FStructRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructRedirect(FStructRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("StructRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStructRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFStructRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructRedirect")),new UScriptStruct::TCppStructOps<FStructRedirect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStructRedirect;
	struct Z_Construct_UScriptStruct_FStructRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStructName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewStructName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldStructName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldStructName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName = { UE4CodeGen_Private::EPropertyClass::Name, "NewStructName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructRedirect, NewStructName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName = { UE4CodeGen_Private::EPropertyClass::Name, "OldStructName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructRedirect, OldStructName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_NewStructName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructRedirect_Statics::NewProp_OldStructName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StructRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructRedirect),
		alignof(FStructRedirect),
		Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructRedirect"), sizeof(FStructRedirect), Get_Z_Construct_UScriptStruct_FStructRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructRedirect_CRC() { return 2767554887U; }
class UScriptStruct* FClassRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClassRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("ClassRedirect"), sizeof(FClassRedirect), Get_Z_Construct_UScriptStruct_FClassRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassRedirect(FClassRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("ClassRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClassRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFClassRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassRedirect")),new UScriptStruct::TCppStructOps<FClassRedirect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClassRedirect;
	struct Z_Construct_UScriptStruct_FClassRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceOnly_MetaData[];
#endif
		static void NewProp_InstanceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewClassPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewClassPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewClassClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewClassClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSubobjName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewSubobjName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldSubobjName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldSubobjName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_SetBit(void* Obj)
	{
		((FClassRedirect*)Obj)->InstanceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "InstanceOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FClassRedirect), &Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage = { UE4CodeGen_Private::EPropertyClass::Name, "NewClassPackage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, NewClassPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass = { UE4CodeGen_Private::EPropertyClass::Name, "NewClassClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, NewClassClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName = { UE4CodeGen_Private::EPropertyClass::Name, "NewSubobjName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, NewSubobjName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName = { UE4CodeGen_Private::EPropertyClass::Name, "OldSubobjName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, OldSubobjName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName = { UE4CodeGen_Private::EPropertyClass::Name, "NewClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, NewClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName = { UE4CodeGen_Private::EPropertyClass::Name, "OldClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, OldClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClassRedirect, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_InstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewSubobjName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldSubobjName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_NewClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_OldClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassRedirect_Statics::NewProp_ObjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClassRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClassRedirect),
		alignof(FClassRedirect),
		Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassRedirect"), sizeof(FClassRedirect), Get_Z_Construct_UScriptStruct_FClassRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassRedirect_CRC() { return 1648730190U; }
class UScriptStruct* FGameNameRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGameNameRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameNameRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("GameNameRedirect"), sizeof(FGameNameRedirect), Get_Z_Construct_UScriptStruct_FGameNameRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameNameRedirect(FGameNameRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("GameNameRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGameNameRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFGameNameRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameNameRedirect")),new UScriptStruct::TCppStructOps<FGameNameRedirect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGameNameRedirect;
	struct Z_Construct_UScriptStruct_FGameNameRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameNameRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameNameRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName = { UE4CodeGen_Private::EPropertyClass::Name, "NewGameName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameNameRedirect, NewGameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName = { UE4CodeGen_Private::EPropertyClass::Name, "OldGameName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGameNameRedirect, OldGameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_NewGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameNameRedirect_Statics::NewProp_OldGameName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameNameRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GameNameRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameNameRedirect),
		alignof(FGameNameRedirect),
		Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameNameRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameNameRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameNameRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameNameRedirect"), sizeof(FGameNameRedirect), Get_Z_Construct_UScriptStruct_FGameNameRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameNameRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameNameRedirect_CRC() { return 3549662210U; }
class UScriptStruct* FScreenMessageString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScreenMessageString_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenMessageString, Z_Construct_UPackage__Script_Engine(), TEXT("ScreenMessageString"), sizeof(FScreenMessageString), Get_Z_Construct_UScriptStruct_FScreenMessageString_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScreenMessageString(FScreenMessageString::StaticStruct, TEXT("/Script/Engine"), TEXT("ScreenMessageString"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScreenMessageString
{
	FScriptStruct_Engine_StaticRegisterNativesFScreenMessageString()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScreenMessageString")),new UScriptStruct::TCppStructOps<FScreenMessageString>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFScreenMessageString;
	struct Z_Construct_UScriptStruct_FScreenMessageString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Helper struct for tracking on screen messages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenMessageString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Scale of text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale = { UE4CodeGen_Private::EPropertyClass::Struct, "TextScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, TextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The number of frames it has been displayed so far." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentTimeDisplayed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, CurrentTimeDisplayed), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The number of frames to display it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, TimeToDisplay), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to display the message in." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DisplayColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, DisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The message to display." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ScreenMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, ScreenMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The 'key' for this message." },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::UInt64, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FScreenMessageString, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_CurrentTimeDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_ScreenMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenMessageString_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenMessageString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScreenMessageString",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FScreenMessageString),
		alignof(FScreenMessageString),
		Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenMessageString_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenMessageString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenMessageString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScreenMessageString_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScreenMessageString"), sizeof(FScreenMessageString), Get_Z_Construct_UScriptStruct_FScreenMessageString_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScreenMessageString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScreenMessageString_CRC() { return 2197322258U; }
class UScriptStruct* FDropNoteInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDropNoteInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropNoteInfo, Z_Construct_UPackage__Script_Engine(), TEXT("DropNoteInfo"), sizeof(FDropNoteInfo), Get_Z_Construct_UScriptStruct_FDropNoteInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDropNoteInfo(FDropNoteInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("DropNoteInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDropNoteInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFDropNoteInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DropNoteInfo")),new UScriptStruct::TCppStructOps<FDropNoteInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDropNoteInfo;
	struct Z_Construct_UScriptStruct_FDropNoteInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropNoteInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Info about one note dropped in the map during PIE." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropNoteInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Text to assign to Note actor in edited level." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment = { UE4CodeGen_Private::EPropertyClass::Str, "Comment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDropNoteInfo, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Rotation to create Note actor in edited level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDropNoteInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Location to create Note actor in edited level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDropNoteInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropNoteInfo_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropNoteInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DropNoteInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDropNoteInfo),
		alignof(FDropNoteInfo),
		Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDropNoteInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDropNoteInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDropNoteInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DropNoteInfo"), sizeof(FDropNoteInfo), Get_Z_Construct_UScriptStruct_FDropNoteInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDropNoteInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDropNoteInfo_CRC() { return 2488348391U; }
class UScriptStruct* FStatColorMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStatColorMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatColorMapping, Z_Construct_UPackage__Script_Engine(), TEXT("StatColorMapping"), sizeof(FStatColorMapping), Get_Z_Construct_UScriptStruct_FStatColorMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatColorMapping(FStatColorMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("StatColorMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStatColorMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFStatColorMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatColorMapping")),new UScriptStruct::TCppStructOps<FStatColorMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStatColorMapping;
	struct Z_Construct_UScriptStruct_FStatColorMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBlend_MetaData[];
#endif
		static void NewProp_DisableBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatColorMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_SetBit(void* Obj)
	{
		((FStatColorMapping*)Obj)->DisableBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "DisableBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FStatColorMapping), &Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap = { UE4CodeGen_Private::EPropertyClass::Array, "ColorMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(FStatColorMapping, ColorMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatColorMapEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Str, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(FStatColorMapping, StatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_DisableBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_ColorMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapping_Statics::NewProp_StatName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatColorMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StatColorMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatColorMapping),
		alignof(FStatColorMapping),
		Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatColorMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatColorMapping"), sizeof(FStatColorMapping), Get_Z_Construct_UScriptStruct_FStatColorMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatColorMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatColorMapping_CRC() { return 655586407U; }
class UScriptStruct* FStatColorMapEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStatColorMapEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatColorMapEntry, Z_Construct_UPackage__Script_Engine(), TEXT("StatColorMapEntry"), sizeof(FStatColorMapEntry), Get_Z_Construct_UScriptStruct_FStatColorMapEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatColorMapEntry(FStatColorMapEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("StatColorMapEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStatColorMapEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFStatColorMapEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatColorMapEntry")),new UScriptStruct::TCppStructOps<FStatColorMapEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStatColorMapEntry;
	struct Z_Construct_UScriptStruct_FStatColorMapEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatColorMapEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out = { UE4CodeGen_Private::EPropertyClass::Struct, "Out", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(FStatColorMapEntry, Out), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In = { UE4CodeGen_Private::EPropertyClass::Float, "In", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(FStatColorMapEntry, In), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::NewProp_In,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StatColorMapEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStatColorMapEntry),
		alignof(FStatColorMapEntry),
		Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatColorMapEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatColorMapEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatColorMapEntry"), sizeof(FStatColorMapEntry), Get_Z_Construct_UScriptStruct_FStatColorMapEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatColorMapEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatColorMapEntry_CRC() { return 1805567679U; }
class UScriptStruct* FWorldContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWorldContext_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldContext, Z_Construct_UPackage__Script_Engine(), TEXT("WorldContext"), sizeof(FWorldContext), Get_Z_Construct_UScriptStruct_FWorldContext_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorldContext(FWorldContext::StaticStruct, TEXT("/Script/Engine"), TEXT("WorldContext"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWorldContext
{
	FScriptStruct_Engine_StaticRegisterNativesFWorldContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorldContext")),new UScriptStruct::TCppStructOps<FWorldContext>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWorldContext;
	struct Z_Construct_UScriptStruct_FWorldContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveNetDrivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveNetDrivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveNetDrivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingLevelStreamingStatusUpdates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingLevelStreamingStatusUpdates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingLevelStreamingStatusUpdates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferencers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectReferencers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectReferencers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedLevelsForPendingMapChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedLevelsForPendingMapChange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedLevelsForPendingMapChange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToFullyLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToFullyLoad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackagesToFullyLoad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingNetGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingNetGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRemoteURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "FWorldContext\n   A context for dealing with UWorlds at the engine level. As the engine brings up and destroys world, we need a way to keep straight\n   what world belongs to what.\n\n   WorldContexts can be thought of as a track. By default we have 1 track that we load and unload levels on. Adding a second context is adding\n   a second track; another track of progression for worlds to live on.\n\n   For the GameEngine, there will be one WorldContext until we decide to support multiple simultaneous worlds.\n   For the EditorEngine, there may be one WorldContext for the EditorWorld and one for the PIE World.\n\n   FWorldContext provides both a way to manage 'the current PIE UWorld*' as well as state that goes along with connecting/travelling to\nnew worlds.\n\n   FWorldContext should remain internal to the UEngine classes. Outside code should not keep pointers or try to manage FWorldContexts directly.\n   Outside code can still deal with UWorld*, and pass UWorld*s into Engine level functions. The Engine code can look up the relevant context\n   for a given UWorld*.\n\nFor convenience, FWorldContext can maintain outside pointers to UWorld*s. For example, PIE can tie UWorld* UEditorEngine::PlayWorld to the PIE\n   world context. If the PIE UWorld changes, the UEditorEngine::PlayWorld pointer will be automatically updated. This is done with AddRef() and\nSetCurrentWorld()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of active net drivers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveNetDrivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FWorldContext, ActiveNetDrivers), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveNetDrivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedNetDriver, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "OwningGameInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, OwningGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport = { UE4CodeGen_Private::EPropertyClass::Object, "GameViewport", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates = { UE4CodeGen_Private::EPropertyClass::Array, "PendingLevelStreamingStatusUpdates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, PendingLevelStreamingStatusUpdates), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PendingLevelStreamingStatusUpdates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLevelStreamingStatus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Handles to object references; used by the engine to e.g. the prevent objects from being garbage collected." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectReferencers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, ObjectReferencers), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectReferencers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObjectReferencer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Array of already loaded levels. The ordering is arbitrary and depends on what is already loaded and such." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange = { UE4CodeGen_Private::EPropertyClass::Array, "LoadedLevelsForPendingMapChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, LoadedLevelsForPendingMapChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LoadedLevelsForPendingMapChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of tag/array pairs that is used at LoadMap time to fully load packages that may be needed for the map/game with DLC, but we can't use DynamicLoadObject to load from the packages" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad = { UE4CodeGen_Private::EPropertyClass::Array, "PackagesToFullyLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, PackagesToFullyLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PackagesToFullyLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame = { UE4CodeGen_Private::EPropertyClass::Object, "PendingNetGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, PendingNetGame), Z_Construct_UClass_UPendingNetGame_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "last server we connected to (for \"reconnect\" command)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL = { UE4CodeGen_Private::EPropertyClass::Struct, "LastRemoteURL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, LastRemoteURL), Z_Construct_UScriptStruct_FURL, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "URL the last time we traveled" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL = { UE4CodeGen_Private::EPropertyClass::Struct, "LastURL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FWorldContext, LastURL), Z_Construct_UScriptStruct_FURL, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ActiveNetDrivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_OwningGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_GameViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingLevelStreamingStatusUpdates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_ObjectReferencers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LoadedLevelsForPendingMapChange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PackagesToFullyLoad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_PendingNetGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastRemoteURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldContext_Statics::NewProp_LastURL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldContext",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FWorldContext),
		alignof(FWorldContext),
		Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorldContext_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorldContext"), sizeof(FWorldContext), Get_Z_Construct_UScriptStruct_FWorldContext_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorldContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorldContext_CRC() { return 3683309421U; }
class UScriptStruct* FNamedNetDriver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedNetDriver_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedNetDriver, Z_Construct_UPackage__Script_Engine(), TEXT("NamedNetDriver"), sizeof(FNamedNetDriver), Get_Z_Construct_UScriptStruct_FNamedNetDriver_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedNetDriver(FNamedNetDriver::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedNetDriver"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedNetDriver
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedNetDriver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedNetDriver")),new UScriptStruct::TCppStructOps<FNamedNetDriver>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedNetDriver;
	struct Z_Construct_UScriptStruct_FNamedNetDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedNetDriver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Active and named net drivers instantiated from an FNetDriverDefinition\nThe net driver will remain instantiated on this struct until it is destroyed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedNetDriver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Instantiation of named net driver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "NetDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FNamedNetDriver, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedNetDriver_Statics::NewProp_NetDriver,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedNetDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedNetDriver",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNamedNetDriver),
		alignof(FNamedNetDriver),
		Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedNetDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedNetDriver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedNetDriver_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedNetDriver"), sizeof(FNamedNetDriver), Get_Z_Construct_UScriptStruct_FNamedNetDriver_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedNetDriver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedNetDriver_CRC() { return 715256173U; }
class UScriptStruct* FNetDriverDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNetDriverDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetDriverDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("NetDriverDefinition"), sizeof(FNetDriverDefinition), Get_Z_Construct_UScriptStruct_FNetDriverDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetDriverDefinition(FNetDriverDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("NetDriverDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNetDriverDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFNetDriverDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NetDriverDefinition")),new UScriptStruct::TCppStructOps<FNetDriverDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNetDriverDefinition;
	struct Z_Construct_UScriptStruct_FNetDriverDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriverClassNameFallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DriverClassNameFallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriverClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DriverClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Container for describing various types of netdrivers available to the engine\nThe engine will try to construct a netdriver of a given type and, failing that,\nthe fallback version." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetDriverDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Class name of the fallback net driver if the main net driver class fails to initialize" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback = { UE4CodeGen_Private::EPropertyClass::Name, "DriverClassNameFallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetDriverDefinition, DriverClassNameFallback), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Class name of primary net driver" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName = { UE4CodeGen_Private::EPropertyClass::Name, "DriverClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetDriverDefinition, DriverClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Unique name of this net driver definition" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName = { UE4CodeGen_Private::EPropertyClass::Name, "DefName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNetDriverDefinition, DefName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassNameFallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DriverClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::NewProp_DefName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NetDriverDefinition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNetDriverDefinition),
		alignof(FNetDriverDefinition),
		Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetDriverDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetDriverDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetDriverDefinition"), sizeof(FNetDriverDefinition), Get_Z_Construct_UScriptStruct_FNetDriverDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetDriverDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetDriverDefinition_CRC() { return 3404556087U; }
class UScriptStruct* FLevelStreamingStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingStatus_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStreamingStatus, Z_Construct_UPackage__Script_Engine(), TEXT("LevelStreamingStatus"), sizeof(FLevelStreamingStatus), Get_Z_Construct_UScriptStruct_FLevelStreamingStatus_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelStreamingStatus(FLevelStreamingStatus::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelStreamingStatus"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelStreamingStatus
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelStreamingStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelStreamingStatus")),new UScriptStruct::TCppStructOps<FLevelStreamingStatus>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelStreamingStatus;
	struct Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[];
#endif
		static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "level streaming updates that should be applied immediately after committing the map change" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStreamingStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelStreamingStatus, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((FLevelStreamingStatus*)Obj)->bShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLevelStreamingStatus), &Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
	{
		((FLevelStreamingStatus*)Obj)->bShouldBeLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLevelStreamingStatus), &Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelStreamingStatus, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_bShouldBeLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::NewProp_PackageName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelStreamingStatus",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLevelStreamingStatus),
		alignof(FLevelStreamingStatus),
		Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingStatus_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelStreamingStatus"), sizeof(FLevelStreamingStatus), Get_Z_Construct_UScriptStruct_FLevelStreamingStatus_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelStreamingStatus_CRC() { return 4014636537U; }
class UScriptStruct* FFullyLoadedPackagesInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo, Z_Construct_UPackage__Script_Engine(), TEXT("FullyLoadedPackagesInfo"), sizeof(FFullyLoadedPackagesInfo), Get_Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFullyLoadedPackagesInfo(FFullyLoadedPackagesInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("FullyLoadedPackagesInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFullyLoadedPackagesInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFFullyLoadedPackagesInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FullyLoadedPackagesInfo")),new UScriptStruct::TCppStructOps<FFullyLoadedPackagesInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFullyLoadedPackagesInfo;
	struct Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToLoad;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagesToLoad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyLoadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FullyLoadType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Struct to help hold information about packages needing to be fully-loaded for DLC, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFullyLoadedPackagesInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "List of objects that were loaded, for faster cleanup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "LoadedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFullyLoadedPackagesInfo, LoadedObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LoadedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The list of packages that will be fully loaded when the above Map is loaded" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad = { UE4CodeGen_Private::EPropertyClass::Array, "PackagesToLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFullyLoadedPackagesInfo, PackagesToLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PackagesToLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "When this map or gametype is loaded, the packages in the following array will be loaded and added to root, then removed from root when map is unloaded" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Str, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFullyLoadedPackagesInfo, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "When to load these packages" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType = { UE4CodeGen_Private::EPropertyClass::Byte, "FullyLoadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFullyLoadedPackagesInfo, FullyLoadType), Z_Construct_UEnum_Engine_EFullyLoadPackageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_LoadedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_PackagesToLoad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::NewProp_FullyLoadType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FullyLoadedPackagesInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFullyLoadedPackagesInfo),
		alignof(FFullyLoadedPackagesInfo),
		Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FullyLoadedPackagesInfo"), sizeof(FFullyLoadedPackagesInfo), Get_Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_CRC() { return 2133401041U; }
	void UEngine::StaticRegisterNativesUEngine()
	{
	}
	UClass* Z_Construct_UClass_UEngine_NoRegister()
	{
		return UEngine::StaticClass();
	}
	struct Z_Construct_UClass_UEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWorldContextHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextWorldContextHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartedLoadMapMovie_MetaData[];
#endif
		static void NewProp_bStartedLoadMapMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartedLoadMapMovie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeServerActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeServerActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RuntimeServerActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriverDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NetDriverDefinitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetDriverDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensityBillboards_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensityBillboards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSPSelectionHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BSPSelectionHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMeshSectionHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionMeshSectionHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleEventManagerClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParticleEventManagerClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockReadOnlyLevels_MetaData[];
#endif
		static void NewProp_bLockReadOnlyLevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockReadOnlyLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSaverInhibitorSemaphore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSaverInhibitorSemaphore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVisualLogRecordingOnStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bEnableVisualLogRecordingOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAILogging_MetaData[];
#endif
		static void NewProp_bDisableAILogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAILogging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressMapWarnings_MetaData[];
#endif
		static void NewProp_bSuppressMapWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressMapWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData[];
#endif
		static void NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOnScreenDebugMessagesDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOnScreenDebugMessages_MetaData[];
#endif
		static void NewProp_bEnableOnScreenDebugMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOnScreenDebugMessages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverridingSelectedColor_MetaData[];
#endif
		static void NewProp_bIsOverridingSelectedColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverridingSelectedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterialColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedMaterialColorOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubduedSelectionOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubduedSelectionOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterialColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedMaterialColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectedMaterialColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectedMaterialColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetClientTicksPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetClientTicksPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingDroppedNotes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingDroppedNotes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingDroppedNotes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleResizeWarn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleResizeWarn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleResize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleResize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseOnLossOfFocus_MetaData[];
#endif
		static void NewProp_bPauseOnLossOfFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseOnLossOfFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionPixelsFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOcclusionPixelsFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveProbablyVisibleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimitiveProbablyVisibleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTranslationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraTranslationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRotationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMatureLanguage_MetaData[];
#endif
		static void NewProp_bAllowMatureLanguage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMatureLanguage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshLODRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshLODRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransitionGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransitionDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransitionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScreenshotSaveDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameScreenshotSaveDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_BrushShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_BrushShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_OrthoBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_OrthoBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_BSPCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_BSPCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_VolumeCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_VolumeCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_ScaleBoxHi_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_ScaleBoxHi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_WireBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_WireBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_NonSolidWire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_NonSolidWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_SemiSolidWire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_SemiSolidWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_SubtractWire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_SubtractWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_AddWire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_AddWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_BrushWire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_BrushWire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_WorldBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C_WorldBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGenerateLowQualityLightmaps_MetaData[];
#endif
		static void NewProp_bShouldGenerateLowQualityLightmaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGenerateLowQualityLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPawnsAllowedToBeSpawnedInAFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData[];
#endif
		static void NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckForMultiplePawnsSpawnedInAFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTimecodeFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTimecodeFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeProviderClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimecodeProviderClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTimecodeProviderClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTimecodeProviderClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTimecodeProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTimecodeProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTimecodeProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTimecodeProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStepClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomTimeStepClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCustomTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCustomTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCustomTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultCustomTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedFrameRateRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedFrameRateRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedFrameRate_MetaData[];
#endif
		static void NewProp_bUseFixedFrameRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothFrameRate_MetaData[];
#endif
		static void NewProp_bSmoothFrameRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorPSysRealtimeLOD_MetaData[];
#endif
		static void NewProp_bEnableEditorPSysRealtimeLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorPSysRealtimeLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMultiThreadedAnimationUpdate_MetaData[];
#endif
		static void NewProp_bAllowMultiThreadedAnimationUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultiThreadedAnimationUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData[];
#endif
		static void NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeAnimBlueprintMemberVariableAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlueprintsTickByDefault_MetaData[];
#endif
		static void NewProp_bCanBlueprintsTickByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlueprintsTickByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLoopIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumLoopIterationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesForcedOff_MetaData[];
#endif
		static void NewProp_bSubtitlesForcedOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesForcedOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[];
#endif
		static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHardwareSurveyEnabled_MetaData[];
#endif
		static void NewProp_bHardwareSurveyEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHardwareSurveyEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientCycles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientCycles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCycles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameCycles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickCycles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickCycles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeferredCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeferredCommands;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeferredCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightMapDensityTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightMapDensityTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightMapPlaceholderTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightMapPlaceholderTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightMapPlaceholderTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightMapPlaceholderTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniFontTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiniFontTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniFontTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniFontTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreIntegratedSkinBRDFTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreIntegratedSkinBRDFTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreIntegratedSkinBRDFTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreIntegratedSkinBRDFTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveStructRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveStructRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveStructRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePluginRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivePluginRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivePluginRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveClassRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveClassRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveClassRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGameNameRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveGameNameRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveGameNameRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultPhysMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysMaterial;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorBrushMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorBrushMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorBrushMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorBrushMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatColorMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatColorMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatColorMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapDensitySelectedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightMapDensitySelectedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapDensityVertexMappedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightMapDensityVertexMappedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderLightMapDensityColorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderLightMapDensityColorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderLightMapDensityGrayscaleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderLightMapDensityGrayscaleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderLightMapDensityGrayscale_MetaData[];
#endif
		static void NewProp_bRenderLightMapDensityGrayscale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderLightMapDensityGrayscale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLightMapDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLightMapDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealLightMapDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealLightMapDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLightMapDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinLightMapDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxES3PixelShaderAdditiveComplexityCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxES2PixelShaderAdditiveComplexityCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxES2PixelShaderAdditiveComplexityCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPixelShaderAdditiveComplexityCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingAccuracyColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingAccuracyColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingAccuracyColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HLODColorationColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HLODColorationColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HLODColorationColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODColorationColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODColorationColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODColorationColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StationaryLightOverlapColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StationaryLightOverlapColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StationaryLightOverlapColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightComplexityColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LightComplexityColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightComplexityColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadComplexityColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuadComplexityColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadComplexityColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaderComplexityColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShaderComplexityColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShaderComplexityColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingOnlyBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingOnlyBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrowMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowsIndicatorMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewShadowsIndicatorMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowsIndicatorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewShadowsIndicatorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidLightmapSettingsMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvalidLightmapSettingsMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidLightmapSettingsMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvalidLightmapSettingsMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialPrismatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialPrismatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialZAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialYAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialXAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterialX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterialX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintLimitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintLimitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEditorMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugEditorMaterialName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEditorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugEditorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothPaintMaterialWireframeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothPaintMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialWireframeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterialWireframe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterialWireframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothPaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothPaintMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeightMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneWeightMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneWeightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneWeightMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_BlueOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_BlueOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_GreenOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_GreenOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_RedOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_RedOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_RedOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_AlphaAsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_AlphaAsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorViewModeMaterialName_ColorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorViewModeMaterial_ColorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VertexColorMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VertexColorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSurfaceMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveSurfaceMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSurfaceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveSurfaceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationUnlitMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShadedLevelColorationUnlitMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationUnlitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadedLevelColorationUnlitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationLitMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShadedLevelColorationLitMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadedLevelColorationLitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadedLevelColorationLitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingTexelDensityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LightingTexelDensityName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingTexelDensityMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingTexelDensityMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColorationUnlitMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelColorationUnlitMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColorationUnlitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelColorationUnlitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColorationLitMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelColorationLitMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColorationLitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelColorationLitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugMeshMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugMeshMaterial;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeomMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeomMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeomMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WireframeMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WireframeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBloomKernelTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBloomKernelTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBloomKernelTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBloomKernelTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBokehTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBokehTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBokehTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBokehTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyNoiseTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighFrequencyNoiseTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyNoiseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighFrequencyNoiseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPVertexTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBSPVertexTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPVertexTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBSPVertexTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultDiffuseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetManagerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSingleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameSingleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSingletonClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameSingletonClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlueprintBaseClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBlueprintBaseClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActorClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelScriptActorClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LevelScriptActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameUserSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameUserSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIControllerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameUserSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameUserSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameUserSettingsClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameUserSettingsClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsCollisionHandlerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PhysicsCollisionHandlerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AvoidanceManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceManagerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationSystemConfigClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationSystemConfigClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationSystemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationSystemClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSettingsClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSettingsClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WorldSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPlayerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPlayerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameViewportClientClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameViewportClientClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameViewportClientClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameViewportClientClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConsoleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalFontNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalFontNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalFontNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalFonts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalFonts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalFonts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubtitleFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargeFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LargeFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MediumFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediumFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmallFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TinyFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TinyFontName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TinyFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TinyFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Engine.h" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Abstract base class of all Engine classes, responsible for management of systems critical to editor or game systems.\nAlso defines default classes for certain engine systems." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle = { UE4CodeGen_Private::EPropertyClass::Int, "NextWorldContextHandle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEngine, NextWorldContextHandle), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "true if the loading movie was started during LoadMap()." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bStartedLoadMapMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartedLoadMapMovie", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Runtime-modified list of server actors, allowing plugins to use serveractors, without permanently adding them to config files" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors = { UE4CodeGen_Private::EPropertyClass::Array, "RuntimeServerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, RuntimeServerActors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RuntimeServerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A configurable list of actors that are automatically spawned upon server startup (just prior to InitGame)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors = { UE4CodeGen_Private::EPropertyClass::Array, "ServerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, ServerActors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ServerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A list of named UNetDriver definitions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions = { UE4CodeGen_Private::EPropertyClass::Array, "NetDriverDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000006000, 1, nullptr, STRUCT_OFFSET(UEngine, NetDriverDefinitions), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NetDriverDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNetDriverDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected billboard objects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards = { UE4CodeGen_Private::EPropertyClass::Float, "SelectionHighlightIntensityBillboards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectionHighlightIntensityBillboards), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_HoverHighlightIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on hovered objects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HoverHighlightIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "HoverHighlightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, HoverHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_HoverHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_HoverHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected BSP surfaces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "BSPSelectionHighlightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, BSPSelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectionMeshSectionHighlightIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected mesh sections in mesh editors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionMeshSectionHighlightIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "SelectionMeshSectionHighlightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectionMeshSectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionMeshSectionHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionMeshSectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Used to alter the intensity level of the selection highlight on selected objects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "SelectionHighlightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Particle event manager *" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath = { UE4CodeGen_Private::EPropertyClass::Str, "ParticleEventManagerClassPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, ParticleEventManagerClassPath), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "true if the the user cannot modify levels that are read only." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bLockReadOnlyLevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockReadOnlyLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Semaphore to control screen saver inhibitor thread access." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore = { UE4CodeGen_Private::EPropertyClass::Int, "ScreenSaverInhibitorSemaphore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, ScreenSaverInhibitorSemaphore), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart = { UE4CodeGen_Private::EPropertyClass::UInt32, "bEnableVisualLogRecordingOnStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, bEnableVisualLogRecordingOnStart), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "determines whether AI logging should be processed or not" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bDisableAILogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableAILogging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then skip drawing map warnings on screen even in non (UE_BUILD_SHIPPING || UE_BUILD_TEST) builds" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bSuppressMapWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressMapWarnings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then disable the display of OnScreenDebug messages (used when running)" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bEnableOnScreenDebugMessagesDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOnScreenDebugMessagesDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then disable OnScreenDebug messages. Can be toggled in real-time." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bEnableOnScreenDebugMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOnScreenDebugMessages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether or not selection color is being overridden" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bIsOverridingSelectedColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOverridingSelectedColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "An override to use in some cases instead of the selected material color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedMaterialColorOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectedMaterialColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Subdued version of the selection outline color. Used for indicating sub-selection of components vs actors" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SubduedSelectionOutlineColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SubduedSelectionOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color of the selection outline color.  Generally the same as selected material color unless the selection material color is being overridden" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectionOutlineColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectionOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color of selected objects in the level viewport (additive)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedMaterialColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, SelectedMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Default color of selected objects in the level viewport (additive)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultSelectedMaterialColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultSelectedMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Minimum desired framerate setting" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "MinDesiredFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, MinDesiredFrameRate), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Current display gamma setting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma = { UE4CodeGen_Private::EPropertyClass::Float, "DisplayGamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, DisplayGamma), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Number of times to tick each client per second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "NetClientTicksPerSecond", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, NetClientTicksPerSecond), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes = { UE4CodeGen_Private::EPropertyClass::Array, "PendingDroppedNotes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, PendingDroppedNotes), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PendingDroppedNotes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDropNoteInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If the resize request is larger than this, spew out a warning to the log" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn = { UE4CodeGen_Private::EPropertyClass::Int, "MaxParticleResizeWarn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxParticleResizeWarn), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The maximum allowed size to a ParticleEmitterInstance::Resize call.\nIf larger, the function will return without resizing." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxParticleResize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxParticleResize), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to pause the game if focus is lost." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bPauseOnLossOfFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bPauseOnLossOfFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Max screen pixel fraction where retesting when unoccluded is worth the GPU time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOcclusionPixelsFraction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxOcclusionPixelsFraction), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The amount of time a primitive is considered to be probably visible after it was last actually visible." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime = { UE4CodeGen_Private::EPropertyClass::Float, "PrimitiveProbablyVisibleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, PrimitiveProbablyVisibleTime), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "camera movement beyond which occlusion queries are ignored from previous frame (because they are likely not valid)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "CameraTranslationThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, CameraTranslationThreshold), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "camera rotation (deg) beyond which occlusion queries are ignored from previous frame (because they are likely not valid)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "CameraRotationThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, CameraRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "whether mature language is allowed *" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bAllowMatureLanguage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMatureLanguage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MeshLODRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Level of detail range control for meshes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MeshLODRange = { UE4CodeGen_Private::EPropertyClass::Float, "MeshLODRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, MeshLODRange), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MeshLODRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MeshLODRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The gamemode for the destination map" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode = { UE4CodeGen_Private::EPropertyClass::Str, "TransitionGameMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, TransitionGameMode), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The current transition description text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription = { UE4CodeGen_Private::EPropertyClass::Str, "TransitionDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, TransitionDescription), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The current transition type." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType = { UE4CodeGen_Private::EPropertyClass::Byte, "TransitionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, TransitionType), Z_Construct_UEnum_Engine_ETransitionType, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The save directory for newly created screenshots" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory = { UE4CodeGen_Private::EPropertyClass::Struct, "GameScreenshotSaveDirectory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, GameScreenshotSaveDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_StreamingDistanceFactor_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Fudge factor for tweaking the distance based miplevel determination" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StreamingDistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StreamingDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UEngine, StreamingDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_StreamingDistanceFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_StreamingDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape = { UE4CodeGen_Private::EPropertyClass::Struct, "C_BrushShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_BrushShape), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume = { UE4CodeGen_Private::EPropertyClass::Struct, "C_Volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_Volume), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground = { UE4CodeGen_Private::EPropertyClass::Struct, "C_OrthoBackground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_OrthoBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision = { UE4CodeGen_Private::EPropertyClass::Struct, "C_BSPCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_BSPCollision), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision = { UE4CodeGen_Private::EPropertyClass::Struct, "C_VolumeCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_VolumeCollision), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi = { UE4CodeGen_Private::EPropertyClass::Struct, "C_ScaleBoxHi", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_ScaleBoxHi), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground = { UE4CodeGen_Private::EPropertyClass::Struct, "C_WireBackground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_WireBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire = { UE4CodeGen_Private::EPropertyClass::Struct, "C_NonSolidWire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_NonSolidWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire = { UE4CodeGen_Private::EPropertyClass::Struct, "C_SemiSolidWire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_SemiSolidWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire = { UE4CodeGen_Private::EPropertyClass::Struct, "C_SubtractWire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_SubtractWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire = { UE4CodeGen_Private::EPropertyClass::Struct, "C_AddWire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_AddWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire = { UE4CodeGen_Private::EPropertyClass::Struct, "C_BrushWire", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_BrushWire), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Color preferences." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox = { UE4CodeGen_Private::EPropertyClass::Struct, "C_WorldBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, C_WorldBox), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether or not the LQ lightmaps should be generated during lighting rebuilds.  This has been moved to r.SupportLowQualityLightmaps." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bShouldGenerateLowQualityLightmaps_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldGenerateLowQualityLightmaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If bCheckForMultiplePawnsSpawnedInAFrame==true, then we will check to see that no more than this number of pawns are spawned in a frame. *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame = { UE4CodeGen_Private::EPropertyClass::Int, "NumPawnsAllowedToBeSpawnedInAFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, NumPawnsAllowedToBeSpawnedInAFrame), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether we should check for more than N pawns spawning in a single frame.\nBasically, spawning pawns and all of their attachments can be slow.  And on consoles it\ncan be really slow.  If this bool is true we will display a" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bCheckForMultiplePawnsSpawnedInAFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bCheckForMultiplePawnsSpawnedInAFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Frame rate used to generated the engine Timecode's frame number when no TimecodeProvider are specified.\nIt doesn't control the Engine frame rate. The Engine can run faster or slower that the specified TimecodeFrameRate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeFrameRate = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTimecodeFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultTimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "TimecodeProvider" },
		{ "MetaClass", "TimecodeProvider" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Override the CustomTimecodeProvider when the engine is started.\nWhen set, this does not change the DefaultTImecodeProvider class.\nInstead, it will create an instance and set it as the CustomTimecodeProvider." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "TimecodeProviderClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, TimecodeProviderClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProviderClassName_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "DefaultTimecodeProvider" },
		{ "MetaClass", "TimecodeProvider" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Allows UEngine subclasses a chance to override the DefaultTimecodeProvider class.\nThis must be set before InitializeObjectReferences is called.\nThis is intentionally protected and not exposed to config." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProviderClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTimecodeProviderClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultTimecodeProviderClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProviderClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProviderClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimecodeProvider = { UE4CodeGen_Private::EPropertyClass::Object, "CustomTimecodeProvider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, CustomTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimecodeProvider_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Default timecode provider that will be used when no custom provider is set.\nThis is expected to be valid throughout the entire life of the application." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProvider = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultTimecodeProvider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProvider_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Custom TimeStep" },
		{ "MetaClass", "EngineCustomTimeStep" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Override how the Engine process the Framerate/Timestep.\nThis class will be responsible of updating the application Time and DeltaTime.\nCan be used to synchronize the engine with another process (gen-lock)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomTimeStepClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UEngine, CustomTimeStepClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_CurrentCustomTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Control how the Engine process the Framerate/Timestep" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_CurrentCustomTimeStep = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentCustomTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, CurrentCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_CurrentCustomTimeStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_CurrentCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultCustomTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Control how the Engine process the Framerate/Timestep" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultCustomTimeStep = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultCustomTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultCustomTimeStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange_MetaData[] = {
		{ "Category", "Framerate" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Range of framerates in which smoothing will kick in" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothedFrameRateRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, SmoothedFrameRateRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "15.0" },
		{ "EditCondition", "bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The fixed framerate to use." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "FixedFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, FixedFrameRate), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to use a fixed framerate." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bUseFixedFrameRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixedFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "EditCondition", "!bUseFixedFrameRate" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Whether to enable framerate smoothing." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bSmoothFrameRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bEnableEditorPSysRealtimeLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableEditorPSysRealtimeLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_MetaData[] = {
		{ "Category", "Anim Blueprints" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether by default we allow anim blueprint graph updates to be performed on non-game threads. This enables some extra checks in the anim blueprint compiler that will warn when unsafe operations are being attempted. This will force all anim blueprints to be recompiled." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bAllowMultiThreadedAnimationUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMultiThreadedAnimationUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData[] = {
		{ "Category", "Anim Blueprints" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether anim blueprint nodes that access member variables of their class directly should use the optimized path that avoids a thunk to the Blueprint VM. This will force all anim blueprints to be recompiled." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bOptimizeAnimBlueprintMemberVariableAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bOptimizeAnimBlueprintMemberVariableAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Controls whether Blueprint subclasses of actors or components can tick by default.\n\nBlueprints that derive from native C++ classes that have bCanEverTick=true will always be able to tick\nBlueprints that derive from exactly AActor or UActorComponent will always be able to tick\nOtherwise, they can tick as long as the parent doesn't have meta=(ChildCannotTick) and either bCanBlueprintsTickByDefault is true or the parent has meta=(ChildCanTick)" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bCanBlueprintsTickByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlueprintsTickByDefault", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Script maximum loop iteration count used as a threshold to warn users about script execution runaway" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumLoopIterationCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, MaximumLoopIterationCount), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Flag for forcibly disabling subtitles even if you try to turn them back on they will be off" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bSubtitlesForcedOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubtitlesForcedOff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Flag for completely disabling subtitles for localized sounds." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bSubtitlesEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubtitlesEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "DEPRECATED - Can a runtime game/application report anonymous hardware survey statistics (such as display resolution and GPU model) back to Epic?" },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bHardwareSurveyEnabled_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bHardwareSurveyEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The distance of the camera's near clipping plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "NearClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UEngine, NearClipPlane), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClientCycles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClientCycles = { UE4CodeGen_Private::EPropertyClass::Int, "ClientCycles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ClientCycles), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClientCycles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClientCycles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameCycles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameCycles = { UE4CodeGen_Private::EPropertyClass::Int, "GameCycles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameCycles), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameCycles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameCycles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TickCycles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TickCycles = { UE4CodeGen_Private::EPropertyClass::Int, "TickCycles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, TickCycles), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TickCycles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TickCycles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Array of deferred command strings/ execs that get executed at the end of the frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands = { UE4CodeGen_Private::EPropertyClass::Array, "DeferredCommands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DeferredCommands), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "DeferredCommands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The view port representing the current game instance. Can be 0 so don't use without checking." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport = { UE4CodeGen_Private::EPropertyClass::Object, "GameViewport", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "LightMapDensityTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightMapDensityTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to display LightMapDensity" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture = { UE4CodeGen_Private::EPropertyClass::Object, "LightMapDensityTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LightMapDensityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "WeightMapPlaceholderTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, WeightMapPlaceholderTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used as a placeholder for terrain weight-maps to give the material the correct texture format." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture = { UE4CodeGen_Private::EPropertyClass::Object, "WeightMapPlaceholderTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, WeightMapPlaceholderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "MiniFontTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MiniFontTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to do font rendering in shaders" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture = { UE4CodeGen_Private::EPropertyClass::Object, "MiniFontTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, MiniFontTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "PreIntegratedSkinBRDFTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, PreIntegratedSkinBRDFTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used for pre-integrated skin shading" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture = { UE4CodeGen_Private::EPropertyClass::Object, "PreIntegratedSkinBRDFTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, PreIntegratedSkinBRDFTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveStructRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, ActiveStructRedirects), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveStructRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStructRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "ActivePluginRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, ActivePluginRedirects), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActivePluginRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPluginRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveClassRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, ActiveClassRedirects), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveClassRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClassRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveGameNameRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UEngine, ActiveGameNameRedirects), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveGameNameRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameNameRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultPhysMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultPhysMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "PhysicalMaterial to use if none is defined for a particular object." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultPhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorBrushMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800044000, 1, nullptr, STRUCT_OFFSET(UEngine, EditorBrushMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render the sides of the builder brush/volumes/etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "EditorBrushMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, EditorBrushMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings = { UE4CodeGen_Private::EPropertyClass::Array, "StatColorMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, StatColorMappings), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StatColorMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStatColorMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to render selected objects in for LightMap Density view mode." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LightMapDensitySelectedColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightMapDensitySelectedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The color to render vertex mapped objects in for LightMap Density view mode." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LightMapDensityVertexMappedColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightMapDensityVertexMappedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The scale factor when rendering color density." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale = { UE4CodeGen_Private::EPropertyClass::Float, "RenderLightMapDensityColorScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, RenderLightMapDensityColorScale), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The scale factor when rendering gray scale density." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale = { UE4CodeGen_Private::EPropertyClass::Float, "RenderLightMapDensityGrayscaleScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, RenderLightMapDensityGrayscaleScale), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "If true, then render gray scale density." },
	};
#endif
	void Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_SetBit(void* Obj)
	{
		((UEngine*)Obj)->bRenderLightMapDensityGrayscale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderLightMapDensityGrayscale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEngine), &Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Maximum lightmap density value for coloring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLightMapDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxLightMapDensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Ideal lightmap density value for coloring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity = { UE4CodeGen_Private::EPropertyClass::Float, "IdealLightMapDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, IdealLightMapDensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Minimum lightmap density value for coloring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MinLightMapDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MinLightMapDensity), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount = { UE4CodeGen_Private::EPropertyClass::Float, "MaxES3PixelShaderAdditiveComplexityCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxES3PixelShaderAdditiveComplexityCount), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxES2PixelShaderAdditiveComplexityCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxES2PixelShaderAdditiveComplexityCount = { UE4CodeGen_Private::EPropertyClass::Float, "MaxES2PixelShaderAdditiveComplexityCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxES2PixelShaderAdditiveComplexityCount), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxES2PixelShaderAdditiveComplexityCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxES2PixelShaderAdditiveComplexityCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Complexity limits for the various complexity view mode combinations.\nThese limits are used to map instruction counts to ShaderComplexityColors." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPixelShaderAdditiveComplexityCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, MaxPixelShaderAdditiveComplexityCount), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used for texture streaming accuracy debug view modes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingAccuracyColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, StreamingAccuracyColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StreamingAccuracyColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render LOD coloration." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors = { UE4CodeGen_Private::EPropertyClass::Array, "HLODColorationColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, HLODColorationColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HLODColorationColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render LOD coloration." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors = { UE4CodeGen_Private::EPropertyClass::Array, "LODColorationColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LODColorationColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODColorationColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render stationary light overlap." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors = { UE4CodeGen_Private::EPropertyClass::Array, "StationaryLightOverlapColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, StationaryLightOverlapColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StationaryLightOverlapColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render light complexity." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors = { UE4CodeGen_Private::EPropertyClass::Array, "LightComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightComplexityColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LightComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render quad complexity." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors = { UE4CodeGen_Private::EPropertyClass::Array, "QuadComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, QuadComplexityColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QuadComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The colors used to render shader complexity." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors = { UE4CodeGen_Private::EPropertyClass::Array, "ShaderComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, ShaderComplexityColors), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShaderComplexityColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingOnlyBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightingOnlyBrightness), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "ArrowMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, ArrowMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that 'fakes' lighting, used for arrows, widgets." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ArrowMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "DefaultMaterials" },
		{ "DisplayName", "Preview Shadows Indicator Material" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviewShadowsIndicatorMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UEngine, PreviewShadowsIndicatorMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that renders a message about preview shadows being used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewShadowsIndicatorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, PreviewShadowsIndicatorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "InvalidLightmapSettingsMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, InvalidLightmapSettingsMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that renders a message about lightmap settings being invalid." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "InvalidLightmapSettingsMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, InvalidLightmapSettingsMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialPrismatic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialPrismatic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialZAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialZAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialZ), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialYAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialYAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialY), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialXAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialXAxis), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterialX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterialX), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to render constraint limits" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintLimitMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConstraintLimitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug opaque material. Used in various animation editor viewport features." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugEditorMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DebugEditorMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug meshes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DebugEditorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, DebugEditorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the material used to render cloth wireframe in the clothing tools" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName = { UE4CodeGen_Private::EPropertyClass::Struct, "ClothPaintMaterialWireframeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800044000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframeName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the material used to render cloth in the clothing tools" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "ClothPaintMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800044000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance = { UE4CodeGen_Private::EPropertyClass::Object, "ClothPaintMaterialWireframeInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframeInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "ClothPaintMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe = { UE4CodeGen_Private::EPropertyClass::Object, "ClothPaintMaterialWireframe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterialWireframe), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Materials used to render cloth properties on skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ClothPaintMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, ClothPaintMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneWeightMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800044000, 1, nullptr, STRUCT_OFFSET(UEngine, BoneWeightMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to render bone weights on skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BoneWeightMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, BoneWeightMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorViewModeMaterialName_BlueOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_BlueOnly), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (blue only)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorViewModeMaterial_BlueOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_BlueOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorViewModeMaterialName_GreenOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_GreenOnly), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (green only)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorViewModeMaterial_GreenOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_GreenOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorViewModeMaterialName_RedOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_RedOnly), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (red only)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorViewModeMaterial_RedOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_RedOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorViewModeMaterialName_AlphaAsColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_AlphaAsColor), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (alpha channel as color)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorViewModeMaterial_AlphaAsColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_AlphaAsColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorViewModeMaterialName_ColorOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterialName_ColorOnly), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material for visualizing vertex colors on meshes in the scene (color only, no alpha)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorViewModeMaterial_ColorOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorViewModeMaterial_ColorOnly), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "VertexColorMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material that renders vertex color as emmissive." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "VertexColorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, VertexColorMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "RemoveSurfaceMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, RemoveSurfaceMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used to indicate that the associated BSP surface should be removed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "RemoveSurfaceMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, RemoveSurfaceMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "ShadedLevelColorationUnlitMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, ShadedLevelColorationUnlitMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in unlit view port modes.  Uses shading to show axis directions." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ShadedLevelColorationUnlitMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ShadedLevelColorationUnlitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "ShadedLevelColorationLitMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, ShadedLevelColorationLitMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in lit view port modes. Uses shading to show axis directions." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ShadedLevelColorationLitMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ShadedLevelColorationLitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName = { UE4CodeGen_Private::EPropertyClass::Str, "LightingTexelDensityName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LightingTexelDensityName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing lighting only w/ lightmap texel density." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LightingTexelDensityMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LightingTexelDensityMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelColorationUnlitMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LevelColorationUnlitMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in unlit view port modes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LevelColorationUnlitMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LevelColorationUnlitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelColorationLitMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, LevelColorationLitMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Material used for visualizing level membership in lit view port modes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LevelColorationLitMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LevelColorationLitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugMeshMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DebugMeshMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A material used to render debug meshes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DebugMeshMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DebugMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName = { UE4CodeGen_Private::EPropertyClass::Struct, "GeomMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800044000, 1, nullptr, STRUCT_OFFSET(UEngine, GeomMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A translucent material used to render things in geometry mode." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GeomMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEngine, GeomMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName = { UE4CodeGen_Private::EPropertyClass::Str, "WireframeMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, WireframeMaterialName), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The material used to render wireframe meshes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "WireframeMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, WireframeMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBloomKernelTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBloomKernelTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to bloom when using FFT, mimics characteristic bloom produced in a camera from a signle bright source" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultBloomKernelTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBloomKernelTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBokehTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBokehTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to blur out of focus content, mimics the Bokeh shape of actual cameras" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultBokehTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBokehTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "HighFrequencyNoiseTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, HighFrequencyNoiseTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Texture used to get random image grain values for post processing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture = { UE4CodeGen_Private::EPropertyClass::Object, "HighFrequencyNoiseTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, HighFrequencyNoiseTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBSPVertexTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBSPVertexTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultBSPVertexTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBSPVertexTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultDiffuseTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultDiffuseTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A global default diffuse texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultDiffuseTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultDiffuseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTextureName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultTextureName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A global default texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A UObject spawned at initialization time to handle game-specific data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager = { UE4CodeGen_Private::EPropertyClass::Object, "AssetManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, AssetManager), Z_Construct_UClass_UAssetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Asset Manager Class" },
		{ "MetaClass", "Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of a singleton class to spawn as the AssetManager, configurable per game. If empty, it will not spawn one" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetManagerClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040002044001, 1, nullptr, STRUCT_OFFSET(UEngine, AssetManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "A UObject spawned at initialization time to handle game-specific data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton = { UE4CodeGen_Private::EPropertyClass::Object, "GameSingleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameSingleton), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Game Singleton Class" },
		{ "MetaClass", "Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of a singleton class to create at startup time, configurable per game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "GameSingletonClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040002044001, 1, nullptr, STRUCT_OFFSET(UEngine, GameSingletonClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Default Blueprint Base Class" },
		{ "MetaClass", "Object" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of the base class to use for new blueprints, configurable on a per-game basis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBlueprintBaseClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040002044001, 1, nullptr, STRUCT_OFFSET(UEngine, DefaultBlueprintBaseClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Level Script Actor Class" },
		{ "MetaClass", "LevelScriptActor" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelScriptActorClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044001, 1, nullptr, STRUCT_OFFSET(UEngine, LevelScriptActorClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "LevelScriptActorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LevelScriptActorClass), Z_Construct_UClass_ALevelScriptActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Global instance of the user game settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings = { UE4CodeGen_Private::EPropertyClass::Object, "GameUserSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameUserSettings), Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName_MetaData[] = {
		{ "DisplayName", "Default AIController class for all Pawns" },
		{ "MetaClass", "AI" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "name of Controller class to be used as default AIController class for pawns" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "AIControllerClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044000, 1, nullptr, STRUCT_OFFSET(UEngine, AIControllerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameUserSettingsClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameUserSettingsClass), Z_Construct_UClass_UGameUserSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName_MetaData[] = {
		{ "DisplayName", "Game User Settings Class" },
		{ "MetaClass", "GameUserSettings" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "GameUserSettingsClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044000, 1, nullptr, STRUCT_OFFSET(UEngine, GameUserSettingsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Physics Collision Handler Class" },
		{ "MetaClass", "PhysicsCollisionHandler" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of PhysicsCollisionHandler class we should use by default." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicsCollisionHandlerClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040002044001, 1, nullptr, STRUCT_OFFSET(UEngine, PhysicsCollisionHandlerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "PhysicsCollisionHandler class we should use by default *" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass = { UE4CodeGen_Private::EPropertyClass::Class, "PhysicsCollisionHandlerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, PhysicsCollisionHandlerClass), Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class for behavior tree manager *" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass = { UE4CodeGen_Private::EPropertyClass::Class, "AvoidanceManagerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, AvoidanceManagerClass), Z_Construct_UClass_UAvoidanceManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName_MetaData[] = {
		{ "DisplayName", "Avoidance Manager Class" },
		{ "MetaClass", "AvoidanceManager" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Name of behavior tree manager class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "AvoidanceManagerClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044000, 1, nullptr, STRUCT_OFFSET(UEngine, AvoidanceManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class for NavigationSystem *" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass = { UE4CodeGen_Private::EPropertyClass::Class, "NavigationSystemConfigClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, NavigationSystemConfigClass), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName_MetaData[] = {
		{ "DisplayName", "Navigation System Config Class" },
		{ "MetaClass", "NavigationSystem" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "NavigationSystemConfigClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044000, 1, nullptr, STRUCT_OFFSET(UEngine, NavigationSystemConfigClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class for NavigationSystem *" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass = { UE4CodeGen_Private::EPropertyClass::Class, "NavigationSystemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, NavigationSystemClass), Z_Construct_UClass_UNavigationSystemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName_MetaData[] = {
		{ "DisplayName", "Navigation System Class" },
		{ "MetaClass", "NavigationSystem" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "NavigationSystemClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044000, 1, nullptr, STRUCT_OFFSET(UEngine, NavigationSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "World Settings Class" },
		{ "MetaClass", "WorldSettings" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldSettingsClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044001, 1, nullptr, STRUCT_OFFSET(UEngine, WorldSettingsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class for WorldSettings *" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass = { UE4CodeGen_Private::EPropertyClass::Class, "WorldSettingsClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, WorldSettingsClass), Z_Construct_UClass_AWorldSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Local Player Class" },
		{ "MetaClass", "LocalPlayer" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalPlayerClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044001, 1, nullptr, STRUCT_OFFSET(UEngine, LocalPlayerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class to use for local players." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass = { UE4CodeGen_Private::EPropertyClass::Class, "LocalPlayerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LocalPlayerClass), Z_Construct_UClass_ULocalPlayer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Game Viewport Client Class" },
		{ "MetaClass", "GameViewportClient" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "GameViewportClientClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044001, 1, nullptr, STRUCT_OFFSET(UEngine, GameViewportClientClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class to use for the game viewport client." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass = { UE4CodeGen_Private::EPropertyClass::Class, "GameViewportClientClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, GameViewportClientClass), Z_Construct_UClass_UGameViewportClient_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "DisplayName", "Console Class" },
		{ "MetaClass", "Console" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002044001, 1, nullptr, STRUCT_OFFSET(UEngine, ConsoleClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "The class to use for the game console." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass = { UE4CodeGen_Private::EPropertyClass::Class, "ConsoleClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, ConsoleClass), Z_Construct_UClass_UConsole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_MetaData[] = {
		{ "Category", "Fonts" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalFontNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000044001, 1, nullptr, STRUCT_OFFSET(UEngine, AdditionalFontNames), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalFontNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Any additional fonts that script may use without hard-referencing the font." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalFonts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, AdditionalFonts), METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalFonts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "Fonts" },
		{ "DisplayName", "Subtitle Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName = { UE4CodeGen_Private::EPropertyClass::Struct, "SubtitleFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000044001, 1, nullptr, STRUCT_OFFSET(UEngine, SubtitleFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont = { UE4CodeGen_Private::EPropertyClass::Object, "SubtitleFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, SubtitleFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "Fonts" },
		{ "DisplayName", "Large Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName = { UE4CodeGen_Private::EPropertyClass::Struct, "LargeFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UEngine, LargeFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont = { UE4CodeGen_Private::EPropertyClass::Object, "LargeFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, LargeFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "Fonts" },
		{ "DisplayName", "Medium Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName = { UE4CodeGen_Private::EPropertyClass::Struct, "MediumFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UEngine, MediumFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont = { UE4CodeGen_Private::EPropertyClass::Object, "MediumFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, MediumFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "Fonts" },
		{ "DisplayName", "Small Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName = { UE4CodeGen_Private::EPropertyClass::Struct, "SmallFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UEngine, SmallFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont = { UE4CodeGen_Private::EPropertyClass::Object, "SmallFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, SmallFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName_MetaData[] = {
		{ "AllowedClasses", "Font" },
		{ "Category", "Fonts" },
		{ "DisplayName", "Tiny Font" },
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName = { UE4CodeGen_Private::EPropertyClass::Struct, "TinyFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UEngine, TinyFontName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Engine.h" },
		{ "ToolTip", "Fonts." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont = { UE4CodeGen_Private::EPropertyClass::Object, "TinyFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEngine, TinyFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NextWorldContextHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bStartedLoadMapMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RuntimeServerActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ServerActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetDriverDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensityBillboards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HoverHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BSPSelectionHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionMeshSectionHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionHighlightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ParticleEventManagerClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bLockReadOnlyLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ScreenSaverInhibitorSemaphore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableVisualLogRecordingOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bDisableAILogging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSuppressMapWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessagesDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableOnScreenDebugMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bIsOverridingSelectedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubduedSelectionOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectionOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SelectedMaterialColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultSelectedMaterialColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MinDesiredFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DisplayGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NetClientTicksPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PendingDroppedNotes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResizeWarn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxParticleResize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bPauseOnLossOfFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxOcclusionPixelsFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PrimitiveProbablyVisibleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CameraTranslationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CameraRotationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMatureLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MeshLODRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TransitionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameScreenshotSaveDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StreamingDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_OrthoBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BSPCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_VolumeCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_ScaleBoxHi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_WireBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_NonSolidWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_SemiSolidWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_SubtractWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_AddWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_BrushWire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_C_WorldBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bShouldGenerateLowQualityLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NumPawnsAllowedToBeSpawnedInAFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bCheckForMultiplePawnsSpawnedInAFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TimecodeProviderClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProviderClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimecodeProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTimecodeProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CustomTimeStepClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_CurrentCustomTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultCustomTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmoothedFrameRateRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_FixedFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bUseFixedFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSmoothFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bEnableEditorPSysRealtimeLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bAllowMultiThreadedAnimationUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bOptimizeAnimBlueprintMemberVariableAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bCanBlueprintsTickByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaximumLoopIterationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesForcedOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bSubtitlesEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bHardwareSurveyEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NearClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClientCycles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameCycles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TickCycles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DeferredCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WeightMapPlaceholderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MiniFontTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreIntegratedSkinBRDFTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveStructRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActivePluginRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveClassRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ActiveGameNameRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultPhysMaterial,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_EditorBrushMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StatColorMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensitySelectedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightMapDensityVertexMappedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RenderLightMapDensityGrayscaleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_bRenderLightMapDensityGrayscale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxLightMapDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_IdealLightMapDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MinLightMapDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxES3PixelShaderAdditiveComplexityCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxES2PixelShaderAdditiveComplexityCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MaxPixelShaderAdditiveComplexityCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StreamingAccuracyColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HLODColorationColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LODColorationColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_StationaryLightOverlapColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightComplexityColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_QuadComplexityColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShaderComplexityColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingOnlyBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ArrowMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PreviewShadowsIndicatorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_InvalidLightmapSettingsMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialPrismatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterialX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConstraintLimitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterialName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugEditorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterialWireframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ClothPaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_BoneWeightMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_BlueOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_BlueOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_GreenOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_GreenOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_RedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_RedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_AlphaAsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_AlphaAsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterialName_ColorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorViewModeMaterial_ColorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_VertexColorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_RemoveSurfaceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationUnlitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ShadedLevelColorationLitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LightingTexelDensityMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationUnlitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelColorationLitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DebugMeshMaterial,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GeomMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WireframeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBloomKernelTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBokehTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_HighFrequencyNoiseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBSPVertexTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultDiffuseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AssetManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AssetManagerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameSingleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameSingletonClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_DefaultBlueprintBaseClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LevelScriptActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AIControllerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameUserSettingsClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_PhysicsCollisionHandlerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AvoidanceManagerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemConfigClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_NavigationSystemClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_WorldSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LocalPlayerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_GameViewportClientClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_ConsoleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFontNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_AdditionalFonts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SubtitleFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LargeFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_LargeFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MediumFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_MediumFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmallFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_SmallFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TinyFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngine_Statics::NewProp_TinyFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngine_Statics::ClassParams = {
		&UEngine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000AFu,
		nullptr, 0,
		Z_Construct_UClass_UEngine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngine, 4031013315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngine(Z_Construct_UClass_UEngine, &UEngine::StaticClass, TEXT("/Script/Engine"), TEXT("UEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngine);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEngine)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
