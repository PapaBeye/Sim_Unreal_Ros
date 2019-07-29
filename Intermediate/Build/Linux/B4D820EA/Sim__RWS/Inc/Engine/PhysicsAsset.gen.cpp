// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAsset() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
// End Cross Module References
class UScriptStruct* FPhysicalAnimationProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationProfile, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationProfile"), sizeof(FPhysicalAnimationProfile), Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalAnimationProfile(FPhysicalAnimationProfile::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalAnimationProfile"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalAnimationProfile")),new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile;
	struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Physical animation parameters used to drive animation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Profile name used to identify set of physical animation parameters" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_PhysicalAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::NewProp_ProfileName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicalAnimationProfile",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPhysicalAnimationProfile),
		alignof(FPhysicalAnimationProfile),
		Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalAnimationProfile"), sizeof(FPhysicalAnimationProfile), Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC() { return 822828295U; }
	void UPhysicsAsset::StaticRegisterNativesUPhysicsAsset()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister()
	{
		return UPhysicsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotForDedicatedServer_MetaData[];
#endif
		static void NewProp_bNotForDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotForDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncScene_MetaData[];
#endif
		static void NewProp_bUseAsyncScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalBodySetups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalBodySetups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsBodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundsBodies;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoundsBodies_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentConstraintProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentConstraintProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentPhysicalAnimationProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintProfiles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationProfiles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PhysicalAnimationProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSkelMesh;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\nThe asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\nA SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\nThe asset can be configured inside the Physics Asset Editor.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Physics/PhAT/Reference/index.html\n@see USkeletalMesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Array, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008020000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, BodySetup_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000020080008, 1, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120000000a0009, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true, we skip instancing bodies for this PhysicsAsset on dedicated servers" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit(void* Obj)
	{
		((UPhysicsAsset*)Obj)->bNotForDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotForDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsAsset), &Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true, bodies of the physics asset will be put into the asynchronous physics scene. If false, they will be put into the synchronous physics scene." },
	};
#endif
	void Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene_SetBit(void* Obj)
	{
		((UPhysicsAsset*)Obj)->bUseAsyncScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsAsset), &Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintSetup), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups = { UE4CodeGen_Private::EPropertyClass::Array, "SkeletalBodySetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, SkeletalBodySetups), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalBodySetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Index of bodies that are marked bConsiderForBounds" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies = { UE4CodeGen_Private::EPropertyClass::Array, "BoundsBodies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, BoundsBodies), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "BoundsBodies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CurrentConstraintProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentConstraintProfileName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CurrentPhysicalAnimationProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentPhysicalAnimationProfileName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintProfiles), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData[] = {
		{ "Category", "Profiles" },
		{ "DisableCopyPaste", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalAnimationProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, PhysicalAnimationProfiles), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PhysicalAnimationProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PreviewSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014010800000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "Default skeletal mesh to use when previewing this PhysicsAsset etc.\nIs the one that was used as the basis for creating this Asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, DefaultSkelMesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BodySetup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bNotForDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_bUseAsyncScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintSetup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_SkeletalBodySetups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_BoundsBodies_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentConstraintProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_CurrentPhysicalAnimationProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_ConstraintProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PhysicalAnimationProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_PreviewSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAsset_Statics::NewProp_DefaultSkelMesh,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UPhysicsAsset, IInterface_PreviewMeshProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams = {
		&UPhysicsAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsAsset, 1789465279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAsset(Z_Construct_UClass_UPhysicsAsset, &UPhysicsAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset)
	void USkeletalBodySetup::StaticRegisterNativesUSkeletalBodySetup()
	{
	}
	UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister()
	{
		return USkeletalBodySetup::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalBodySetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipScaleFromAnimation_MetaData[];
#endif
		static void NewProp_bSkipScaleFromAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipScaleFromAnimation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPhysicalAnimationProfile;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalBodySetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBodySetup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USkeletalBodySetup, PhysicalAnimationData), METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged" },
	};
#endif
	void Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit(void* Obj)
	{
		((USkeletalBodySetup*)Obj)->bSkipScaleFromAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipScaleFromAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkeletalBodySetup), &Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
		{ "ToolTip", "dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentPhysicalAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(USkeletalBodySetup, CurrentPhysicalAnimationProfile), Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_PhysicalAnimationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_bSkipScaleFromAnimation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalBodySetup_Statics::NewProp_CurrentPhysicalAnimationProfile,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalBodySetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalBodySetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams = {
		&USkeletalBodySetup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkeletalBodySetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalBodySetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalBodySetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalBodySetup, 2569836830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalBodySetup(Z_Construct_UClass_USkeletalBodySetup, &USkeletalBodySetup::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalBodySetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalBodySetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
