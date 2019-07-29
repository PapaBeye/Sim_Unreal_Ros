// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_RemoveLinearKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveLinearKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveLinearKeys::StaticRegisterNativesUAnimCompress_RemoveLinearKeys()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister()
	{
		return UAnimCompress_RemoveLinearKeys::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMultithreading_MetaData[];
#endif
		static void NewProp_bUseMultithreading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMultithreading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDecompression_MetaData[];
#endif
		static void NewProp_bUseDecompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDecompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeForForwardPlayback_MetaData[];
#endif
		static void NewProp_bOptimizeForForwardPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeForForwardPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActuallyFilterLinearKeys_MetaData[];
#endif
		static void NewProp_bActuallyFilterLinearKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActuallyFilterLinearKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetarget_MetaData[];
#endif
		static void NewProp_bRetarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentKeyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParentKeyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorDiffSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectorDiffSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinEffectorDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinEffectorDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEffectorDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEffectorDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Whether or not to use multiple threads during compression." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bUseMultithreading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMultithreading", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Whether to use the legacy behavior that compressed and decompressed the whole sequence whenever a key was removed.\nThis is left in for now in order to debug the code if issues arise with the new stateless version.\nThe legacy behavior to compress the whole sequence constantly makes it impossible to compress segments\nin parallel safely. The new code samples the sequence without the compression step in order to make it\nthread safe.\nOnce the stateless code is robust, this can be safely removed. It should never be used." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bUseDecompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDecompression", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = LinearKeyRemoval, meta = (EditCondition=\"bEnableSegmenting\"))" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bOptimizeForForwardPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bOptimizeForForwardPlayback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Controls whether the final filtering step will occur, or only the retargetting after bitwise compression.\nIf both this and bRetarget are false, then the linear compressor will do no better than the underlying bitwise compressor, extremely slowly." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bActuallyFilterLinearKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bActuallyFilterLinearKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "true = As the animation is compressed, adjust animated nodes to compensate for compression error.\nfalse= Do not adjust animated nodes." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveLinearKeys*)Obj)->bRetarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bRetarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "A scale value which increases the likelihood that a bone will retain a key if it's parent also had a key at the same time position.\nHigher values can remove shaking artifacts from the animation, at the cost of compression." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale = { UE4CodeGen_Private::EPropertyClass::Float, "ParentKeyScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, ParentKeyScale), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Error threshold for End Effectors with Sockets attached to them.\nTypically more important bone, where we want to be less aggressive with compression." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket = { UE4CodeGen_Private::EPropertyClass::Float, "EffectorDiffSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, EffectorDiffSocket), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for the end-effectors parent, allowing tighter restrictions near the end of a skeletal chain." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MinEffectorDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MinEffectorDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for all bones except the end-effectors parent." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxEffectorDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxEffectorDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum Scale difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScaleDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxScaleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngleDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxAngleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData[] = {
		{ "Category", "LinearKeyRemoval" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
		{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPosDiff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxPosDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseMultithreading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bUseDecompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bOptimizeForForwardPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bActuallyFilterLinearKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_bRetarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_ParentKeyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_EffectorDiffSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MinEffectorDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxEffectorDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxScaleDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxAngleDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::NewProp_MaxPosDiff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveLinearKeys>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::ClassParams = {
		&UAnimCompress_RemoveLinearKeys::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_RemoveLinearKeys, 386135767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveLinearKeys(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys, &UAnimCompress_RemoveLinearKeys::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveLinearKeys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveLinearKeys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
