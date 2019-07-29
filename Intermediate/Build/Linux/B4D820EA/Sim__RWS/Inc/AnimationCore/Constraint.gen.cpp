// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/Constraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
// End Cross Module References
	static UEnum* ETransformConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ETransformConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransformConstraintType(ETransformConstraintType_StaticEnum, TEXT("/Script/AnimationCore"), TEXT("ETransformConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimationCore_ETransformConstraintType_CRC() { return 3104576123U; }
	UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransformConstraintType"), 0, Get_Z_Construct_UEnum_AnimationCore_ETransformConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransformConstraintType::Translation", (int64)ETransformConstraintType::Translation },
				{ "ETransformConstraintType::Rotation", (int64)ETransformConstraintType::Rotation },
				{ "ETransformConstraintType::Scale", (int64)ETransformConstraintType::Scale },
				{ "ETransformConstraintType::Parent", (int64)ETransformConstraintType::Parent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Transform Constraint Types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransformConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETransformConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType, Z_Construct_UPackage__Script_AnimationCore(), TEXT("EConstraintType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstraintType(EConstraintType_StaticEnum, TEXT("/Script/AnimationCore"), TEXT("EConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimationCore_EConstraintType_CRC() { return 1220188940U; }
	UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstraintType"), 0, Get_Z_Construct_UEnum_AnimationCore_EConstraintType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstraintType::Transform", (int64)EConstraintType::Transform },
				{ "EConstraintType::Aim", (int64)EConstraintType::Aim },
				{ "EConstraintType::MAX", (int64)EConstraintType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim.ToolTip", "Aim Constraint" },
				{ "MAX.ToolTip", "MAX - invalid" },
				{ "ModuleRelativePath", "Public/Constraint.h" },
				{ "ToolTip", "Constraint Types" },
				{ "Transform.ToolTip", "Transform Constraint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConstraintType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EConstraintType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConstraintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintData"), sizeof(FConstraintData), Get_Z_Construct_UScriptStruct_FConstraintData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintData(FConstraintData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintData")),new UScriptStruct::TCppStructOps<FConstraintData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintData;
	struct Z_Construct_UScriptStruct_FConstraintData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constraint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Data that is contained in Node Datat\nYou can have as many of these per node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FConstraintData, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint offset if bMaintainOffset is used" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FConstraintData*)Obj)->bMaintainOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaintainOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintData), &Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Weight of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Description" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint = { UE4CodeGen_Private::EPropertyClass::Struct, "Constraint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintData, Constraint), Z_Construct_UScriptStruct_FConstraintDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FConstraintData),
		alignof(FConstraintData),
		Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintData"), sizeof(FConstraintData), Get_Z_Construct_UScriptStruct_FConstraintData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintData_CRC() { return 3646512169U; }
class UScriptStruct* FConstraintDescriptor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptor, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptor"), sizeof(FConstraintDescriptor), Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescriptor(FConstraintDescriptor::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescriptor"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescriptor")),new UScriptStruct::TCppStructOps<FConstraintDescriptor>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptor;
	struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint data container. It contains union of Constraints and node will contain array of these.\n\nThese are the one contained in NodeData, and it will be iterated via evaluate process\nThe goal is to have contiguous memory location where they can iterate through linearly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintDescriptor, Type), Z_Construct_UEnum_AnimationCore_EConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescriptor",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConstraintDescriptor),
		alignof(FConstraintDescriptor),
		Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescriptor"), sizeof(FConstraintDescriptor), Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC() { return 208440724U; }
class UScriptStruct* FAimConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("AimConstraintDescription"), sizeof(FAimConstraintDescription), Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAimConstraintDescription(FAimConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("AimConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AimConstraintDescription")),new UScriptStruct::TCppStructOps<FAimConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFAimConstraintDescription;
	struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookUpTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLookUp_MetaData[];
#endif
		static void NewProp_bUseLookUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLookUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply aim constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimConstraintDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "LookUpTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookUpTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit(void* Obj)
	{
		((FAimConstraintDescription*)Obj)->bUseLookUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLookUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAimConstraintDescription), &Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookUp_Axis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAt_Axis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		Z_Construct_UScriptStruct_FConstraintDescriptionEx,
		&NewStructOps,
		"AimConstraintDescription",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAimConstraintDescription),
		alignof(FAimConstraintDescription),
		Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AimConstraintDescription"), sizeof(FAimConstraintDescription), Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC() { return 2145818295U; }
class UScriptStruct* FTransformConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraintDescription"), sizeof(FTransformConstraintDescription), Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformConstraintDescription(FTransformConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformConstraintDescription")),new UScriptStruct::TCppStructOps<FTransformConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraintDescription;
	struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraintDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType = { UE4CodeGen_Private::EPropertyClass::Enum, "TransformType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTransformConstraintDescription, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		Z_Construct_UScriptStruct_FConstraintDescriptionEx,
		&NewStructOps,
		"TransformConstraintDescription",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTransformConstraintDescription),
		alignof(FTransformConstraintDescription),
		Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformConstraintDescription"), sizeof(FTransformConstraintDescription), Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC() { return 90557045U; }
class UScriptStruct* FConstraintDescriptionEx::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptionEx, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptionEx"), sizeof(FConstraintDescriptionEx), Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescriptionEx(FConstraintDescriptionEx::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescriptionEx"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescriptionEx")),new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescriptionEx;
	struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxesFilterOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxesFilterOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption = { UE4CodeGen_Private::EPropertyClass::Struct, "AxesFilterOption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FConstraintDescriptionEx, AxesFilterOption), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescriptionEx",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConstraintDescriptionEx),
		alignof(FConstraintDescriptionEx),
		Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescriptionEx"), sizeof(FConstraintDescriptionEx), Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC() { return 1396055788U; }
class UScriptStruct* FTransformConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraint, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformConstraint(FTransformConstraint::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformConstraint")),new UScriptStruct::TCppStructOps<FTransformConstraint>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformConstraint;
	struct Z_Construct_UScriptStruct_FTransformConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
#endif
	void Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FTransformConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaintainOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTransformConstraint), &Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode = { UE4CodeGen_Private::EPropertyClass::Name, "TargetNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, TargetNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode = { UE4CodeGen_Private::EPropertyClass::Name, "SourceNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, SourceNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "@note thought of separating this out per each but we'll have an issue with applying transform in what order\nbut something to think about if that seems better" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator = { UE4CodeGen_Private::EPropertyClass::Struct, "Operator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformConstraint, Operator), Z_Construct_UScriptStruct_FConstraintDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"TransformConstraint",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTransformConstraint),
		alignof(FTransformConstraint),
		Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformConstraint"), sizeof(FTransformConstraint), Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC() { return 2846130805U; }
class UScriptStruct* FConstraintOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintOffset(FConstraintOffset::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintOffset"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintOffset")),new UScriptStruct::TCppStructOps<FConstraintOffset>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintOffset;
	struct Z_Construct_UScriptStruct_FConstraintOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "This is the offset for constraint\n\nSaves individual component (translation, rotation, scale or parent)\nUsed by Constraint for saving the offset, and recovering the offset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Struct, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConstraintOffset, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintOffset",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FConstraintOffset),
		alignof(FConstraintOffset),
		Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintOffset"), sizeof(FConstraintOffset), Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC() { return 2903444321U; }
class UScriptStruct* FConstraintDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription, Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintDescription(FConstraintDescription::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("ConstraintDescription"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintDescription")),new UScriptStruct::TCppStructOps<FConstraintDescription>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFConstraintDescription;
	struct Z_Construct_UScriptStruct_FConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParent_MetaData[];
#endif
		static void NewProp_bParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[];
#endif
		static void NewProp_bScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[];
#endif
		static void NewProp_bRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslation_MetaData[];
#endif
		static void NewProp_bTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleAxes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, ScaleAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationAxes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, RotationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslationAxes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConstraintDescription, TranslationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "this does composed transform - where as individual will accumulate per component" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bParent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescription",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FConstraintDescription),
		alignof(FConstraintDescription),
		Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintDescription"), sizeof(FConstraintDescription), Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC() { return 200941984U; }
class UScriptStruct* FTransformFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FTransformFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformFilter, Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformFilter"), sizeof(FTransformFilter), Get_Z_Construct_UScriptStruct_FTransformFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformFilter(FTransformFilter::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("TransformFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFTransformFilter
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFTransformFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformFilter")),new UScriptStruct::TCppStructOps<FTransformFilter>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFTransformFilter;
	struct Z_Construct_UScriptStruct_FTransformFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A filter for a whole transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformFilter, ScaleFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformFilter, RotationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslationFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTransformFilter, TranslationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"TransformFilter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTransformFilter),
		alignof(FTransformFilter),
		Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformFilter"), sizeof(FTransformFilter), Get_Z_Construct_UScriptStruct_FTransformFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformFilter_CRC() { return 903049285U; }
class UScriptStruct* FFilterOptionPerAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis, Z_Construct_UPackage__Script_AnimationCore(), TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilterOptionPerAxis(FFilterOptionPerAxis::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("FilterOptionPerAxis"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilterOptionPerAxis")),new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFFilterOptionPerAxis;
	struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Filter Option Per Axis\n\nThis is used to filter per axis for constraint options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY = { UE4CodeGen_Private::EPropertyClass::Bool, "bY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX = { UE4CodeGen_Private::EPropertyClass::Bool, "bX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"FilterOptionPerAxis",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FFilterOptionPerAxis),
		alignof(FFilterOptionPerAxis),
		Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilterOptionPerAxis"), sizeof(FFilterOptionPerAxis), Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC() { return 163490141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
