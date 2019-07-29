// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimSequenceBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETypeAdvanceAnim();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
// End Cross Module References
	static UEnum* ETypeAdvanceAnim_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETypeAdvanceAnim, Z_Construct_UPackage__Script_Engine(), TEXT("ETypeAdvanceAnim"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypeAdvanceAnim(ETypeAdvanceAnim_StaticEnum, TEXT("/Script/Engine"), TEXT("ETypeAdvanceAnim"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETypeAdvanceAnim_CRC() { return 1482323048U; }
	UEnum* Z_Construct_UEnum_Engine_ETypeAdvanceAnim()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypeAdvanceAnim"), 0, Get_Z_Construct_UEnum_Engine_ETypeAdvanceAnim_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETAA_Default", (int64)ETAA_Default },
				{ "ETAA_Finished", (int64)ETAA_Finished },
				{ "ETAA_Looped", (int64)ETAA_Looped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETypeAdvanceAnim",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETypeAdvanceAnim",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAnimSequenceBase::StaticRegisterNativesUAnimSequenceBase()
	{
		UClass* Class = UAnimSequenceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayLength", &UAnimSequenceBase::execGetPlayLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics
	{
		struct AnimSequenceBase_eventGetPlayLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimSequenceBase_eventGetPlayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Returns the total play length of the montage, if played back with a speed of 1.0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequenceBase, "GetPlayLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AnimSequenceBase_eventGetPlayLength_Parms), Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister()
	{
		return UAnimSequenceBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifyTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifyTracks_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawCurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawCurveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Notifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Notifies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSequenceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSequenceBase_GetPlayLength, "GetPlayLength" }, // 2012282398
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/AnimSequenceBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "if you change Notifies array, this will need to be rebuilt" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNotifyTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UAnimSequenceBase, AnimNotifyTracks), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimNotifyTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyTrack, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Raw uncompressed float curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData = { UE4CodeGen_Private::EPropertyClass::Struct, "RawCurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequenceBase, RawCurveData), Z_Construct_UScriptStruct_FRawCurveTracks, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Number for tweaking playback rate of this animation globally." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale = { UE4CodeGen_Private::EPropertyClass::Float, "RateScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequenceBase, RateScale), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Length" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Length (in seconds) of this AnimSequence if played back with a speed of 1.0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength = { UE4CodeGen_Private::EPropertyClass::Float, "SequenceLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020015, 1, nullptr, STRUCT_OFFSET(UAnimSequenceBase, SequenceLength), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Animation notifies, sorted by time (earliest notification first)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies = { UE4CodeGen_Private::EPropertyClass::Array, "Notifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequenceBase, Notifies), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Notifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceBase_Statics::ClassParams = {
		&UAnimSequenceBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSequenceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequenceBase, 1993030682);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequenceBase(Z_Construct_UClass_UAnimSequenceBase, &UAnimSequenceBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSequenceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequenceBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
