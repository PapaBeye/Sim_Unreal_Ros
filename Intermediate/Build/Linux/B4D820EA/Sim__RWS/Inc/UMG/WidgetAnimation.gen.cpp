// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/WidgetAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimation() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "OnWidgetAnimationPlaybackStatusChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UWidgetAnimation::StaticRegisterNativesUWidgetAnimation()
	{
		UClass* Class = UWidgetAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndTime", &UWidgetAnimation::execGetEndTime },
			{ "GetStartTime", &UWidgetAnimation::execGetStartTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics
	{
		struct WidgetAnimation_eventGetEndTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the end time of this animation.\n\n@return End time in seconds.\n@see GetStartTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, "GetEndTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(WidgetAnimation_eventGetEndTime_Parms), Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics
	{
		struct WidgetAnimation_eventGetStartTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the start time of this animation.\n\n@return Start time in seconds.\n@see GetEndTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, "GetStartTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(WidgetAnimation_eventGetStartTime_Parms), Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister()
	{
		return UWidgetAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyFinishOnStop_MetaData[];
#endif
		static void NewProp_bLegacyFinishOnStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyFinishOnStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnimationFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnimationStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimationStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetAnimation_GetEndTime, "GetEndTime" }, // 281620932
		{ &Z_Construct_UFunction_UWidgetAnimation_GetStartTime, "GetStartTime" }, // 3955396269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/WidgetAnimation.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "The friendly name for this animation displayed in the designer." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayLabel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, DisplayLabel), METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop." },
	};
#endif
	void Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit(void* Obj)
	{
		((UWidgetAnimation*)Obj)->bLegacyFinishOnStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLegacyFinishOnStop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetAnimation), &Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationBindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, AnimationBindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationBindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene = { UE4CodeGen_Private::EPropertyClass::Object, "MovieScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationFinished_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Fires when the widget animation is finished." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAnimationFinished", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, OnAnimationFinished), Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationStarted_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Fires when the widget animation starts playing." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationStarted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAnimationStarted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UWidgetAnimation, OnAnimationStarted), Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationStarted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_OnAnimationStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams = {
		&UWidgetAnimation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A800A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetAnimation, 2840697058);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetAnimation(Z_Construct_UClass_UWidgetAnimation, &UWidgetAnimation::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
