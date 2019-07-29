// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat();
// End Cross Module References
class UScriptStruct* FComponentSpacePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePose, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePose"), sizeof(FComponentSpacePose), Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSpacePose(FComponentSpacePose::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentSpacePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSpacePose")),new UScriptStruct::TCppStructOps<FComponentSpacePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose;
	struct Z_Construct_UScriptStruct_FComponentSpacePose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in component space (i.e. each transform is relative to the component's transform)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names = { UE4CodeGen_Private::EPropertyClass::Array, "Names", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComponentSpacePose, Names), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Names", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComponentSpacePose, Transforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentSpacePose",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FComponentSpacePose),
		alignof(FComponentSpacePose),
		Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSpacePose"), sizeof(FComponentSpacePose), Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentSpacePose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC() { return 1844298944U; }
class UScriptStruct* FLocalSpacePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpacePose, Z_Construct_UPackage__Script_Engine(), TEXT("LocalSpacePose"), sizeof(FLocalSpacePose), Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalSpacePose(FLocalSpacePose::StaticStruct, TEXT("/Script/Engine"), TEXT("LocalSpacePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose
{
	FScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalSpacePose")),new UScriptStruct::TCppStructOps<FLocalSpacePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose;
	struct Z_Construct_UScriptStruct_FLocalSpacePose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in local space (i.e. each transform is relative to its parent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpacePose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names = { UE4CodeGen_Private::EPropertyClass::Array, "Names", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLocalSpacePose, Names), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Names", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLocalSpacePose, Transforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LocalSpacePose",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLocalSpacePose),
		alignof(FLocalSpacePose),
		Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalSpacePose"), sizeof(FLocalSpacePose), Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalSpacePose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC() { return 3676439723U; }
class UScriptStruct* FNamedTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedTransform, Z_Construct_UPackage__Script_Engine(), TEXT("NamedTransform"), sizeof(FNamedTransform), Get_Z_Construct_UScriptStruct_FNamedTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedTransform(FNamedTransform::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedTransform"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedTransform
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedTransform")),new UScriptStruct::TCppStructOps<FNamedTransform>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedTransform;
	struct Z_Construct_UScriptStruct_FNamedTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedTransform, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedTransform",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedTransform),
		alignof(FNamedTransform),
		Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedTransform"), sizeof(FNamedTransform), Get_Z_Construct_UScriptStruct_FNamedTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC() { return 87000584U; }
class UScriptStruct* FNamedColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedColor, Z_Construct_UPackage__Script_Engine(), TEXT("NamedColor"), sizeof(FNamedColor), Get_Z_Construct_UScriptStruct_FNamedColor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedColor(FNamedColor::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedColor"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedColor
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedColor")),new UScriptStruct::TCppStructOps<FNamedColor>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedColor;
	struct Z_Construct_UScriptStruct_FNamedColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named color" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedColor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedColor, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedColor",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedColor),
		alignof(FNamedColor),
		Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedColor"), sizeof(FNamedColor), Get_Z_Construct_UScriptStruct_FNamedColor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC() { return 1370074501U; }
class UScriptStruct* FNamedVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedVector, Z_Construct_UPackage__Script_Engine(), TEXT("NamedVector"), sizeof(FNamedVector), Get_Z_Construct_UScriptStruct_FNamedVector_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedVector(FNamedVector::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedVector"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedVector
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedVector")),new UScriptStruct::TCppStructOps<FNamedVector>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedVector;
	struct Z_Construct_UScriptStruct_FNamedVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedVector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedVector",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedVector),
		alignof(FNamedVector),
		Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedVector"), sizeof(FNamedVector), Get_Z_Construct_UScriptStruct_FNamedVector_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC() { return 358059839U; }
class UScriptStruct* FNamedFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFloat, Z_Construct_UPackage__Script_Engine(), TEXT("NamedFloat"), sizeof(FNamedFloat), Get_Z_Construct_UScriptStruct_FNamedFloat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedFloat(FNamedFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedFloat")),new UScriptStruct::TCppStructOps<FNamedFloat>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedFloat;
	struct Z_Construct_UScriptStruct_FNamedFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedFloat, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedFloat",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedFloat),
		alignof(FNamedFloat),
		Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedFloat"), sizeof(FNamedFloat), Get_Z_Construct_UScriptStruct_FNamedFloat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC() { return 3980453628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
