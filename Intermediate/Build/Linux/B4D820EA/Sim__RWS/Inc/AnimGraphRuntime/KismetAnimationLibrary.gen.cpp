// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/KismetAnimationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap();
	ANIMGRAPHRUNTIME_API UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK();
// End Cross Module References
	void UKismetAnimationLibrary::StaticRegisterNativesUKismetAnimationLibrary()
	{
		UClass* Class = UKismetAnimationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_DirectionBetweenSockets", &UKismetAnimationLibrary::execK2_DirectionBetweenSockets },
			{ "K2_DistanceBetweenTwoSocketsAndMapRange", &UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange },
			{ "K2_LookAt", &UKismetAnimationLibrary::execK2_LookAt },
			{ "K2_MakePerlinNoiseAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap },
			{ "K2_MakePerlinNoiseVectorAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap },
			{ "K2_TwoBoneIK", &UKismetAnimationLibrary::execK2_TwoBoneIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics
	{
		struct KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameFrom;
			FName SocketOrBoneNameTo;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo = { UE4CodeGen_Private::EPropertyClass::Name, "SocketOrBoneNameTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameTo), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom = { UE4CodeGen_Private::EPropertyClass::Name, "SocketOrBoneNameFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameFrom), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Get Direction Between Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "DirectionBetweenSockets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_DirectionBetweenSockets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics
	{
		struct KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameA;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceA;
			FName SocketOrBoneNameB;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceB;
			bool bRemapRange;
			float InRangeMin;
			float InRangeMax;
			float OutRangeMin;
			float OutRangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
		static void NewProp_bRemapRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketSpaceB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameB_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketSpaceA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameA_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "OutRangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "OutRangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "InRangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "InRangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms*)Obj)->bRemapRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemapRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB = { UE4CodeGen_Private::EPropertyClass::Byte, "SocketSpaceB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceB), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB = { UE4CodeGen_Private::EPropertyClass::Name, "SocketOrBoneNameB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameB), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA = { UE4CodeGen_Private::EPropertyClass::Byte, "SocketSpaceA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceA), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA = { UE4CodeGen_Private::EPropertyClass::Name, "SocketOrBoneNameA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameA), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams[] = {
		{ "bRemapRange", "false" },
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Get Distance Between Two Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "DistanceBetweenSockets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_DistanceBetweenTwoSocketsAndMapRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics
	{
		struct KismetAnimationLibrary_eventK2_LookAt_Parms
		{
			FTransform CurrentTransform;
			FVector TargetPosition;
			FVector LookAtVector;
			bool bUseUpVector;
			FVector UpVector;
			float ClampConeInDegree;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampConeInDegree;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static void NewProp_bUseUpVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUpVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree = { UE4CodeGen_Private::EPropertyClass::Float, "ClampConeInDegree", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ClampConeInDegree), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector = { UE4CodeGen_Private::EPropertyClass::Struct, "UpVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_LookAt_Parms*)Obj)->bUseUpVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseUpVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, LookAtVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams[] = {
		{ "bUseUpVector", "false" },
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Look At Function" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "LookAt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_LookAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms
		{
			float Value;
			float RangeOutMin;
			float RangeOutMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Make Perlin Noise and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeFloatFromPerlinNoise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_MakePerlinNoiseAndRemap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms
		{
			float X;
			float Y;
			float Z;
			float RangeOutMinX;
			float RangeOutMaxX;
			float RangeOutMinY;
			float RangeOutMaxY;
			float RangeOutMinZ;
			float RangeOutMaxZ;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMaxZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMinZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMaxY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMinY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMaxX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX = { UE4CodeGen_Private::EPropertyClass::Float, "RangeOutMinX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Make Perlin Noise Vector and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeVectorFromPerlinNoise" },
		{ "ToolTip", "This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_MakePerlinNoiseVectorAndRemap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics
	{
		struct KismetAnimationLibrary_eventK2_TwoBoneIK_Parms
		{
			FVector RootPos;
			FVector JointPos;
			FVector EndPos;
			FVector JointTarget;
			FVector Effector;
			FVector OutJointPos;
			FVector OutEndPos;
			bool bAllowStretching;
			float StartStretchRatio;
			float MaxStretchScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio;
		static void NewProp_bAllowStretching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEndPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutJointPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale = { UE4CodeGen_Private::EPropertyClass::Float, "MaxStretchScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, MaxStretchScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio = { UE4CodeGen_Private::EPropertyClass::Float, "StartStretchRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, StartStretchRatio), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_TwoBoneIK_Parms*)Obj)->bAllowStretching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStretching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "OutEndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutEndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos = { UE4CodeGen_Private::EPropertyClass::Struct, "OutJointPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutJointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector = { UE4CodeGen_Private::EPropertyClass::Struct, "Effector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, Effector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos = { UE4CodeGen_Private::EPropertyClass::Struct, "EndPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos = { UE4CodeGen_Private::EPropertyClass::Struct, "JointPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos = { UE4CodeGen_Private::EPropertyClass::Struct, "RootPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, RootPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams[] = {
		{ "bAllowStretching", "false" },
		{ "Category", "Utilities|Animation" },
		{ "DisplayName", "Two Bone IK Function" },
		{ "MaxStretchScale", "1.2" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "TwoBoneIK" },
		{ "StartStretchRatio", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, "K2_TwoBoneIK", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetAnimationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetAnimationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetAnimationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets, "K2_DirectionBetweenSockets" }, // 53395881
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange, "K2_DistanceBetweenTwoSocketsAndMapRange" }, // 1732735070
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt, "K2_LookAt" }, // 745517537
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap, "K2_MakePerlinNoiseAndRemap" }, // 1017370411
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap, "K2_MakePerlinNoiseVectorAndRemap" }, // 4235392031
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK, "K2_TwoBoneIK" }, // 1216835135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KismetAnimationLibrary.h" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "AnimGraphLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetAnimationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetAnimationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams = {
		&UKismetAnimationLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetAnimationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetAnimationLibrary, 2616656655);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetAnimationLibrary(Z_Construct_UClass_UKismetAnimationLibrary, &UKismetAnimationLibrary::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UKismetAnimationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetAnimationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
