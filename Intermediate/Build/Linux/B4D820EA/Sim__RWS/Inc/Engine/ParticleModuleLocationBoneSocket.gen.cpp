// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationBoneSocket() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static UEnum* ELocationBoneSocketSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSelectionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationBoneSocketSelectionMethod(ELocationBoneSocketSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationBoneSocketSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_CRC() { return 3690755120U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationBoneSocketSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BONESOCKETSEL_Sequential", (int64)BONESOCKETSEL_Sequential },
				{ "BONESOCKETSEL_Random", (int64)BONESOCKETSEL_Random },
				{ "BONESOCKETSEL_MAX", (int64)BONESOCKETSEL_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationBoneSocketSelectionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationBoneSocketSelectionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELocationBoneSocketSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSource, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationBoneSocketSource(ELocationBoneSocketSource_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationBoneSocketSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSource_CRC() { return 3507817194U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationBoneSocketSource"), 0, Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BONESOCKETSOURCE_Bones", (int64)BONESOCKETSOURCE_Bones },
				{ "BONESOCKETSOURCE_Sockets", (int64)BONESOCKETSOURCE_Sockets },
				{ "BONESOCKETSOURCE_MAX", (int64)BONESOCKETSOURCE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationBoneSocketSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationBoneSocketSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLocationBoneSocketInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationBoneSocketInfo, Z_Construct_UPackage__Script_Engine(), TEXT("LocationBoneSocketInfo"), sizeof(FLocationBoneSocketInfo), Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocationBoneSocketInfo(FLocationBoneSocketInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("LocationBoneSocketInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocationBoneSocketInfo")),new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo;
	struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The offset from the bone/socket to use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the bone/socket on the skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, BoneSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LocationBoneSocketInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLocationBoneSocketInfo),
		alignof(FLocationBoneSocketInfo),
		Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocationBoneSocketInfo"), sizeof(FLocationBoneSocketInfo), Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC() { return 919868339U; }
	void UParticleModuleLocationBoneSocket::StaticRegisterNativesUParticleModuleLocationBoneSocket()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister()
	{
		return UParticleModuleLocationBoneSocket::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSkelMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPreSelectedIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPreSelectedIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[];
#endif
		static void NewProp_bInheritBoneVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[];
#endif
		static void NewProp_bOrientMeshEmitters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[];
#endif
		static void NewProp_bUpdatePositionEachFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniversalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Bone/Socket Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EditorSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\nToo low and the randomness of selection may suffer, too high and memory will be wasted." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices = { UE4CodeGen_Private::EPropertyClass::Int, "NumPreSelectedIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, NumPreSelectedIndices), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName = { UE4CodeGen_Private::EPropertyClass::Name, "SkelMeshActorParamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SkelMeshActorParamName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale = { UE4CodeGen_Private::EPropertyClass::Float, "InheritVelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, InheritVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bInheritBoneVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritBoneVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bOrientMeshEmitters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrientMeshEmitters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, update the particle locations each frame with that of the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bUpdatePositionEachFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatePositionEachFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The method by which to select the bone/socket to spawn at.\n\nSEL_Sequential                  - loop through the bone/socket array in order\nSEL_Random                              - randomly select a bone/socket from the array" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SelectionMethod), Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations = { UE4CodeGen_Private::EPropertyClass::Array, "SourceLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceLocations), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLocationBoneSocketInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "An offset to apply to each bone/socket" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "UniversalOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "Whether the module uses Bones or Sockets for locations.\n\nBONESOCKETSOURCE_Bones          - Use Bones as the source locations.\nBONESOCKETSOURCE_Sockets        - Use Sockets as the source locations." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceType), Z_Construct_UEnum_Engine_ELocationBoneSocketSource, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationBoneSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams = {
		&UParticleModuleLocationBoneSocket::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationBoneSocket, 1124717065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationBoneSocket(Z_Construct_UClass_UParticleModuleLocationBoneSocket, &UParticleModuleLocationBoneSocket::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationBoneSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationBoneSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
