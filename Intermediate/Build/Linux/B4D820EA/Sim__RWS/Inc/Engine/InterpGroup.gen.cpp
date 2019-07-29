// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FInterpEdSelKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpEdSelKey, Z_Construct_UPackage__Script_Engine(), TEXT("InterpEdSelKey"), sizeof(FInterpEdSelKey), Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpEdSelKey(FInterpEdSelKey::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpEdSelKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpEdSelKey")),new UScriptStruct::TCppStructOps<FInterpEdSelKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey;
	struct Z_Construct_UScriptStruct_FInterpEdSelKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsnappedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnsnappedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "A group, associated with a particular  AActor  or set of Actors, which contains a set of InterpTracks for interpolating\nproperties of the  AActor  over time.\nThe Outer of an UInterpGroup is an InterpData." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpEdSelKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition = { UE4CodeGen_Private::EPropertyClass::Float, "UnsnappedPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, UnsnappedPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "KeyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, KeyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track = { UE4CodeGen_Private::EPropertyClass::Object, "Track", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, Track), Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Object, "Group", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpEdSelKey",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInterpEdSelKey),
		alignof(FInterpEdSelKey),
		Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpEdSelKey"), sizeof(FInterpEdSelKey), Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC() { return 3486661256U; }
	void UInterpGroup::StaticRegisterNativesUInterpGroup()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroup_NoRegister()
	{
		return UInterpGroup::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParented_MetaData[];
#endif
		static void NewProp_bIsParented_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParented;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFolder_MetaData[];
#endif
		static void NewProp_bIsFolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpTracks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpTracks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpGroup.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When enabled, this group will be selected in the interp editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When true, this group is considered a 'visual child' of another group.  This doesn't at all affect the behavior of the group, it's only for visual organization.  Also, it's implied that the parent is the next prior group in the array that doesn't have a parent." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsParented = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsParented", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When enabled, this group is treated like a folder in the editor, which should only be used for organization.  Folders are never associated with actors and don't have a presence in the Kismet graph." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsFolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFolder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Whether or not this group is visible in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Whether or not this group is folded away in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData[] = {
		{ "Category", "InterpGroup" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Colour used for drawing tracks etc. related to this group." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpGroup, GroupColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Within an InterpData, all GroupNames must be unique.\nUsed for naming Variable connectors on the Action in Kismet and finding each groups object." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpGroup, GroupName), METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData[] = {
		{ "Category", "InterpGroup" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks = { UE4CodeGen_Private::EPropertyClass::Array, "InterpTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000000001c, 1, nullptr, STRUCT_OFFSET(UInterpGroup, InterpTracks), METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InterpTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000008, 1, nullptr, 0, Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroup_Statics::ClassParams = {
		&UInterpGroup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroup, 926364915);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroup(Z_Construct_UClass_UInterpGroup, &UInterpGroup::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
